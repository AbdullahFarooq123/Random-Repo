#pragma once
class node{
private:
	int data;
	node* ptr;
public:
	node(int value){
		data = value;
		ptr = nullptr;
	}
	int getdata(){
		return data;
	}
	node* getptr(){
		return ptr;
	}
	void setdata(int value){
		data = value;
	}
	void setptr(node* pt){
		ptr = pt;
	}

	~node(){}
};

