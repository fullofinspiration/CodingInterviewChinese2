
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> minmoney(vector<vector<string> > v, vector<vector<int>> info, string s, string d) {
	int len = v.size() - 1; 
	vector<int> min(2); 
	min[0] = 10001; 
	for (int i = 0; i < v.size(); i++) { int len2 = v[i].size();
	int flag = 0;
	for (int j = 0; j < len2 - 1; j++) { 
		if (s == v[i][j]) { for (int k = j + 1; k < len2; k++) { 
			if (d == v[i][k]) { int tm = info[i][1];
			if (tm < min[0]) { min[0] = tm; 
			min[1] = info[i][0]; } 
			flag = 1;
			break; } }
		if (flag == 1) break; } } } 
	return min;
}

int main() {
	int n;
	if (cin >> n); 
	else { cout << "Error" << endl; return 0; } 
	vector<vector<string> > v;
	vector<vector<int>> info(n, vector<int>(3));
	for (int i = 0; i < n; i++) { if (cin >> info[i][0] >> info[i][1] >> info[i][2]);
	else { cout << "Error" << endl; 
	return 0; }        
	vector<string> tmp;  
	string ts;
	for (int j = 0; j < info[i][2]; j++) { if (cin >> ts);
	else { cout << "Error" << endl; return 0; } 
	tmp.push_back(ts); }         v.push_back(tmp); }
	int l;     if (cin >> l); 
	else { cout << "Error" << endl; return 0; }   
	vector<string> sd(l);   
	for (int i = 0; i < l; i++) { if (cin >> sd[i]);  
	else { cout << "Error" << endl; return 0; } }     
	int min = 0;     vector<int> dd;    
	for (int i = 0; i < l - 1; i++) { 
		vector<int> tmpmoney = minmoney(v, info, sd[i], sd[i + 1]);
		if (tmpmoney[0] == 10001 || tmpmoney[1] == 0) { cout << "Error" << endl;   
		return 0; }      
		if (dd.size() && dd[dd.size() - 1] == tmpmoney[1]) 
			continue;
		min += tmpmoney[0];
		dd.push_back(tmpmoney[1]); } 
	cout << min << endl;
	int i = 0;  
	for (i = 0; i < dd.size() - 1; i++) { cout << dd[i] << " "; }    
	cout << dd[i] << endl;
	return 0;
}