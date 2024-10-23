#include <iostream>
#include<math.h>
using namespace std;

struct point{
int x;
int y;
};

void saisir(point*a){
cout<<"saisir les cordonées: "<<endl;
cin>>a->x>>a->y;
}

void aff(point a){
cout<<a.x<<" "<<a.y<<endl;
}

float distance(point a , point b){
float dx = a.x-b.x;
float dy = a.y-b.y;
return sqrt(dx*dy + dy*dy);
}

point milieu(point a , point b ){
point m;
m.x = (a.x + b.x)/2;
m.y = (a.y + b.y)/2;
return m;
}

int main()
{ point a,b,m;

saisir(&a);
saisir(&b);
aff(a);
aff(b);
cout<<"distance: "<<distance(a ,b)<<endl;
m = milieu(a ,b );
m = milieu(a ,b );
cout<<"x:"<<m.x<<endl;
cout<<"y:"<<m.y<<endl;

    return 0;
}
