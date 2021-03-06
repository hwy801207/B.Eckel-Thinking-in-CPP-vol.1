//: EX04:Stash.h
#ifndef STASH_H
#define STASH_H

#include <vector>

struct Stash {
	int size;		// ������ ������� ��������
	int quantity;	// ���������� ���������
	int next;		// ��������� ������ �������
	// ����������� ���������� �������� ������:
	std::vector<unsigned char> storage;
	// �������!
	void initialize(int size);
	void cleanup();
	int add(const void* element);
	void* fetch(int index);
	int count();
	void inflate(int increase);
}; 
#endif // STASH_H
///:~