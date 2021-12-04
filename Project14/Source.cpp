#include <iostream>

using namespace std;
const int n = 10;
double F[n], G[n];
void gen() {
	for (int i = 0; i < n; i++)
	{
		F[i] = (rand() % 2000 - 1000) / 10.0;
		G[i] = (rand() % 2000 - 1000) / 10.0;

	}
} void output(double mas[n]) {
	for (int i = 0; i < n; i++)
	{
		cout << mas[i] << " ";
	}
}
int getindexmin(double mas[n]) {
	int index_min = 0;
	for (int i = 0; i < n; i++)
	{
		if (mas[i] < mas[index_min])
			index_min = i;

	}
	return index_min;
}
int getindexmax(double mas[n]) {
	int index_max = 0;
	for (int i = 0; i < n; i++)
	{
		if (mas[i] > mas[index_max])
			index_max = i;

	}
	return index_max;
}
int main() {

	gen();
	cout << "F: ";

	output(F);
	cout << "\nG: ";

	output(G);

	int index_min = getindexmin(G);
	int index_max = getindexmax(F);
	cout << "\nG[min]: " << G[index_min] << endl;
	cout << "\nF[max]: " << F[index_max];
	double z = 0.5 * fabs(G[index_min] + F[index_max]);
	G[index_min] = z;
	F[index_max] = z;
	cout << "\nF: ";

	output(F);
	cout << "\nG: ";

	output(G);
}