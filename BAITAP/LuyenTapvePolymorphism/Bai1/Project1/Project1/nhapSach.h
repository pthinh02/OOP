#pragma once
#include<iostream>
#include <string>
#include<vector>
using namespace std;

string s, n, k;
int a, select;
float  f;

void getInfo(Book* b)
{
	cin.ignore();
	cout << "========================================\n";
	cout << "Nhap vao ten sach: ";
	getline(cin, s);
	b->setName(s);
	cout << "Nhap vao Tac gia: ";
	getline(cin, n);
	b->setPublisher(n);
	cout << "Nhap vao Nam xuat ban: ";
	cin >> a;
	b->setPublishYear(a);
	cout << "Nhap vao so trang: ";
	cin >> a;
	b->setPage(a);
	cout << "Nhap vao GIA: ";
	cin >> f;
	b->setPrice(f);
	cout << "========================================\n";
}

void getSGK(SGK* s)
{
	getInfo(s);
	cin.ignore();
	cout << "Sach lop: ";
	cin >> a;
	s->setGrade(a);
}

void getNovel(Novel* novel)
{
	getInfo(novel);
	cin.ignore();
	cout << "The Loai: ";
	getline(cin, k);
	novel->setKind(k);
}

void getMGZ(Magazine* mgz)
{
	getInfo(mgz);
	cin.ignore();
	cout << "Dinh ky: ";
	getline(cin, k);
	mgz->setPeriod(k);
}

