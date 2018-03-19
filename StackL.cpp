#include "StackL.h"

void Stack::push(int k){
	
	data.insert(k , data.size() + 1);
	
}


void Stack::clear(){
	data.clear();
}

int Stack::size(){
	
	int size = data.size();
	return size;
}

int Stack::top(){
	
	int pos = data.checkposition(data.size());
	
	return pos;
}


void Stack::pop(){
	
	data.remove(data.size());
	
}

