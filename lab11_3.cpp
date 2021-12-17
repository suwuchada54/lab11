#include<iostream>
#include<fstream>
#include<string>
#include<cmath>
#include<iomanip>
#include<cstdlib>
using namespace std;

int main (){
    int count = 0;
    float sum = 0,mean=0,SD;
    string textline;
	ifstream source("score.txt");
    while (getline(source,textline))
    {
        sum+=atof(textline.c_str());
        SD+=pow((atof(textline.c_str())),2);
        count++;}
        mean=sum/count;
    cout << "Number of data = "<<count<<'\n';
    cout << setprecision(3);
    cout << "Mean = "<<mean<<'\n';
    cout << "Standard deviation = "<<sqrt((SD/count)-pow(mean,2));
    source.close();
	return 0;
}
