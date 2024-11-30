
#include <iostream>
#include "QueueTees.h"
#include "Puppy.h"
#include "Kitty.h"
#include "Panda.h"

int main()
{
	Puppy puppy;
	Kitty kitty;
	Panda panda;
	Panda panda2;
	QueueTees objQueue;

	cout << "\nIntial size: " << objQueue.size();
	try {
		objQueue.enqueue(&puppy);
		objQueue.enqueue(&kitty);
		objQueue.enqueue(&panda);
		objQueue.enqueue(&panda2); // This should trigger the exception
	}
	catch (const runtime_error& e) {
		cerr << "\nError: " << e.what() << endl;
	}
	cout << "\nAfter adding objects size: " << objQueue.size();
	Cutie* cutie_out = objQueue.dequeue();
	cout << "\nCutie out: " << cutie_out->description() << " and Rating: " << cutie_out->cuteness_rating();
	cout << "\nUpdated size: " << objQueue.size();
	Cutie* cutie_out2 = objQueue.dequeue();
	cout << "\nCutie out: " << cutie_out2->description() << " and Rating: " << cutie_out2->cuteness_rating();
	cout << "\nUpdated size: " << objQueue.size();

	return 0;
}

