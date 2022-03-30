#include <iostream>
#include <thread>

using namespace std;

void pEVEN()
{
	for (int i = 1; i <= 10; i++) //print number diantara 1 - 10
	{
		if (i % 2 == 0)
		{
			cout << i << endl; // print even number
			this_thread::sleep_for(chrono::milliseconds(2500));	//delay 2500 miliseconds atau 2,5 detik
		}
	}
}

void pODD()
{
	for (int i = 1; i <= 20; i++) //print number diantara 1-20
	{
		if (i % 2 != 0)
		{
			cout << i << endl; // print odd number
			this_thread::sleep_for(chrono::seconds(1));	//delay 1 detik
		}
	}
}

int main()
{
	thread thrd1(pEVEN);
	thread thrd2(pODD);

	thrd1.join();
	thrd2.join();

	return 0;

}