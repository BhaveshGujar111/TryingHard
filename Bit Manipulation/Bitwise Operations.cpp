#include<bits/stdc++.h>
using namespace std;
/*
	Problem: Bitwise Operations
	Description:
			Bitwise Operators: &,|,~,^,>>,<<

			1. 	The result of AND is 1 only if both bits are 1.  
			2.  The result of OR is 1 if any of the two bits is 1. 
			3.  The result of XOR is 1 if the two bits are different. 
			4. 	The << (left shift) in C or C++ takes two numbers, left shifts the bits of the first operand, the second operand 
				decides the number of places to shift. 
			5. 	The >> (right shift) in C or C++ takes two numbers, right shifts the bits of the first operand, the second operand 
				decides the number of places to shift. 
			6.	The ~ (bitwise NOT) in C or C++ takes one number and inverts all bits of it. 

			Interesting Facts:
			1.	The left shift and right shift operators should not be used for negative numbers.
			2.	Interestingly!! The bitwise OR of two numbers is just the sum of those two numbers if there is no carry involved, 
				otherwise you just add their bitwise AND.
			3. 	The bitwise XOR operator is the most useful operator from a technical interview perspective.
*/

// 	SET BIT AT pos POSITION - { OR Operator }
void setBit(int num, int pos){
	cout << "Set Bit = " << (num | (1 << pos)) << endl;
}

// CLEAR BIT AT pos POSITION - { AND Operator }
void clearBit(int num, int pos){
	cout  << "Clear Bit = " << (num & ~(1 << pos)) << endl;
}

// TOGGLING BIT AT pos POSTIION - { XOR Operator}
void toggleBit(int num, int pos){
	cout  << "Toggle Bit = " << (num ^ (1 << pos)) << endl;
}

// CHECK IF Nth BIT IS SET OR NOT
void checkBit(int num, int pos){
	cout  << "Check Bit = " << (num & (1 << pos));
}

// INVERT EVERY BIT OF A NUMBER / 1's complement
void invertBits(int num){
	cout  << "Invert Bit / 1s complement = " << ~(num) << endl;
}

// 2's complement = 1's complement + 1
void twosComplement(int num){
	cout  << "2s complement = " << ~(num) + 1 << endl;
	cout  << "2s complement = " << -num << endl;
}

// STRIPPING OFF LOWEST SET BIT
void stripLowestBit(int num){
	cout  << "Strip lowest set bit = " << (num & (num - 1)) << endl;
}

// Getting the lowest set bit of a number
void getLowestSetBit(int num){
	cout  << "lowest set bit = " << (num & (-num)) <<endl;
}

// Divide by 2
void divide(int num){
	cout  << "Divide by 2 = " << (num>>1) << endl;
}

// Multiply by 2
void multiply(int num){
	cout  << "Multiply by 2 = " << (num<<1) << endl;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	long long t; cin >> t;
	while(t--){
		int n; cin >> n; // 10011
		setBit(n,3);
		clearBit(n,1);
		toggleBit(n,4);
		checkBit(n,3);
		invertBits(n);
		twosComplement(n);
		stripLowestBit(n);
		getLowestSetBit(n);
		divide(n);
		multiply(n);

	}
	return 0;
}
