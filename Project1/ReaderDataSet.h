#pragma once
#include <string>
#include <fstream>
#include <iostream>
#include <sstream>

using namespace std;

class ReaderDataSet
{
	int** Reader(string file_path){
		const int n = 15;
		int ** arr = new int * [n];
		string s;
		ifstream file;
		file.open(file_path);
		int j = -1;
		int k = -1;
		while (getline(file, s)) {
			j++;
			arr[j] = new int [n];
			for (int i = 0; i < s.length(); i++) {
				if (s[i] != ' ') {
					k++;
					arr[j][k] = s[i];
				}
			}

			
		}
		return arr;
	}
	




};

