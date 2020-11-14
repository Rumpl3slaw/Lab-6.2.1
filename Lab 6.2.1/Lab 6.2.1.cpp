#include <iostream>
#include <iomanip>

using namespace std;

void Create(int* a, const int n, const int Low, const int High);
void Cout(int* a, const int n);
int Condition(int* a, const int n);
int Sum(int* a, const int n);
double Avarage(double  Q, double value);

int main()
{
	srand((unsigned)time(NULL));
	const int n = 30;
	int a[n];

	int Low = -30;
	int High = 30;

	Create(a, n, Low, High);

	cout << "Masyv:" << endl;
	cout << endl;
	Cout(a, n);

	int Q = Condition(a, n);
	cout << "Modyfikovanyi Masyv:" << endl;
	cout << endl;
	Cout(a, n);

	int value = Sum(a, n);
	cout << "Suma elementiv z kriteriyu=" << value << endl;
	cout << endl;
	cout << "Kil`kist` elementiv z kriteriyu=" << Q << endl;
	double Av = Avarage(Q, value);
	cout << "Seredne aryfmetychne neparnyh chysel=" <<setprecision(1)<< Av<< endl;

	return 0;
}

void Create(int* a, const int n, const int Low, const int High)
{
	for (int i = 0;i < n;i++)
		a[i] = Low + rand() % (High - Low + 1);
}
void Cout(int* a, const int n)
{
	for (int i = 0;i < n;i++)
		cout << setw(5) << a[i];
	cout << endl;
	cout << endl;
}
int Condition(int* a, const int n)
{
	int S = 0;
	for (int i = 0;i < n;i++)
	{
		if (a[i] < 0 && a[i] % 2 == 0 || a[i] > 0 && a[i] % 2 == 0)
			a[i] = 0;
		else
			S +=1;
	}
	return S;
}
int Sum(int* a, const int n)
{
	int S = 0;
	for (int i = 0;i < n;i++)
		S += a[i];
	return S;
}
double  Avarage(double Q, double value)
{
	double A = value / Q;
	return A;
}
