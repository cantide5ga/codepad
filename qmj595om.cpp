#include <iostream>
using namespace std;

//http://codepad.org/qmj595om

//const is a type qualifier which speaks directly to the compiler.  In this case, it insures data remains
//unchanged.

class MyClass {
	public:
		//Constructor
		MyClass(int fooArgument, char barArgument) {
			foo = fooArgument;
			bar = barArgument;
		}

		//Overload =
		MyClass & operator=(const MyClass &rightSide) { //an object of type MyClass = the constant value of the address of another object of type MyClass
			foo = rightSide.foo;
			bar = rightSide.bar;

			return *this;
		}

		//Overload output stream
		friend ostream & operator<< (ostream &output, const MyClass &someObject) {
			output << someObject.foo;
			return output;
		}

	private:
		int foo;
		char bar;
};

int main() {
	MyClass object1(1, 'a'), object2(5, 'b');

	cout << "Object1.foo: " << object1 << endl;
	cout << "Object2.foo: " << object2 << endl;

	object2 = object1;

	cout << "Object1.foo: " << object1 << endl;
	cout << "Object2.foo: " << object2 << endl;

	cin.ignore();

	return 0;
}
