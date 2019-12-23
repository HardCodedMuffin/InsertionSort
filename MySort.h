#ifndef MySort
class MySort
{
private:
	double* data;
	const int MAX = 10;
public:
	MySort();
	void assingRandom();
	void printData();
	void printArray(double*);
	double* sortAscending();
	double* sortDescending();
};
#endif // !MySort

