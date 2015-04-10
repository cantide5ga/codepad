#include<iostream>
using namespace std;

// struct to embed your data
// you can add more methods

//http://codepad.org/kX3MRFH0

struct myData {

	static const char * Data;
	short int Read(){
		if(*Data) {
			return *(Data++)- 48;
		}
return 0;
	}

} eData;
const char *myData::Data =
	"1234567890"
	"2234567890"
	"3234567890"
	"4234567890"
	"5234567890"
	"6234567890"
	"7234567890"
	"8234567890"
	"9234567890"
	"0234567890";


int main(){

	for(int i=0; i<100; i++)
		cout << eData.Read();

	cout << endl;


return 0;
}
