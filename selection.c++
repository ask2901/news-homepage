#include <bits/stdc++.h> 
#include <fstream> 
#include <ctime>
using namespace std; 
int main()
{
string myText; 
ifstream
MyReadFile("File1.txt"); 
vector<string> vec1; vector<int> vec2;
while (getline (MyReadFile, myText))
{ 
    vec1.push_back(myText);
}
for(int i = 0; i < vec1.size(); i++){ int num = stoi(vec1[i]); vec2.push_back(num);
}
MyReadFile.close(); 
clock_t start; 
clock_t end;
start = clock();
int min_index=0;
for(int i = 0; i < vec2.size()-1; i++)
{ 
    min_index = i;
    for(int j = i+1; j < vec2.size(); j++)
    { 
        if(vec2[j] < vec2[min_index])
        {
        min_index = j
        }
    }
}

if(min_index != i)
{
    swap(arr[i] , arr[min_index]);
}
}
end = clock();
cout << "Time for Sorting "<< setprecision(25) << fixed << (double)(end - start) / (double) CLOCKS_PER_SEC << endl;
return 0;


