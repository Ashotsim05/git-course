// ej 35i 15
/*#include <iostream>
int main() {
    int a;
    int b;
    std::cin >> a >> b;
    std::cout << a+b << std::endl;
    std::cout << a*b << std::endl;
    std::cout << a-b << std::endl;
    return 0;
}*/




//17
/*
#include <iostream>

int main() {
    int a = 6;
    int s_k;
    int v;
    s_k = 6*a*a;
    v = a*a*a;
    std::cout << s_k << std::endl;
    std::cout << v << std::endl;
    return 0;
}*/



// 18

/*#include <iostream>
#include <cmath>
    
int main() {
    int a = 3;
    int b = 4;
    int P; // ա
    int S; // բ
    int Ank; // գ
    P = 2*(a + b);
    S = a*b;
    Ank = sqrt(a*a + b*b);
    std::cout << P << std::endl;
    std::cout << S << std::endl;
    std::cout << Ank << std::endl;
    return 0;
    }*/



// 19

/*#include <iostream>
#include <cmath>

int main() {
    int a = 5;
    int b = 7;
    int c = 8;
    int P = a+b+c;
    float S = (float)sqrt(P/2*(P/2-a)*(P/2-b)*(P/2-c));
    float sinus = (float)(2*S)/(a*c);
    float cosinus = (float)(a*a + c*c - b*b)/(2*a*c);
    int h = 2*S/c;
    std::cout << P << std::endl;
    std::cout << S << std::endl;
    std::cout << sinus << std::endl;
    std::cout << cosinus << std::endl;
    std::cout << h << std::endl;
    return 0;
}*/



// 20
/*
#include <iostream>
#include <cmath>

int main() {
    int a;
    int b;
    std::cin >> a >> b;
    float c = (float)sqrt(a*a + b*b);
    float s = (float)(a*b)/2;
    std::cout << c << std::endl;
    std::cout << s << std::endl;
    return 0;
}*/

// 21

/*#include <iostream>
int main() {
    int t;
    std::cin >> t;
    float p = 3.14;
    float l = 2*(float)(t/2)*p;
    std::cout << l << std::endl;
    return 0;
}*/


//22

/*#include <iostream>
int main(){
    int a;
    std::cin >> a;
    std::cout << a/1000 << "-";
    a = a%1000;
    std::cout << a/100 << "-";
    a = a%100;
    std::cout << a/10 << "-";
    a = a%10;
    std::cout << a << std::endl;

}*/

//23


/*#include <iostream>
int main() {
    int a;
    int b;
    std::cin >> a;
    b = 5*(4*(a*5 +6)+9);
    b = b/100 - 1;
    std::cout << b << std::endl;
    return 0;
}*/

//24

/*#include <iostream>
int main() {
    float birth;
    int age;
    std::cin >> birth >> age;
    birth = (float)((50*(2*birth+6)+age) - 250)/100;
    std::cout << birth << std::endl;
    std::cout << (float)birth/100 << std::endl;
    return 0;


}*/









/*#include <iostream>

int main() {
    unsigned a;
    unsigned b;
    float c;
    float d;

    std::cin >> a >> b;
    c = (float)(a+b)/2;
    d*=d;
    d = a*a+b*b;

    std::cout << c << std::endl;
    std::cout << d << std::endl;
    
    return 0;
}*/




// exercises from page 41 to 44:

// 1 - a)

/*#include <iostream>
int main() {
    int a, b;
    std::cin >> a >> b;
    if(a%2==1 && b%2 == 1) {
        std::cout << "YES" << std::endl;
    }
    else {
        std::cout << "NO" << std::endl;
    }
    return 0;
}*/

// b)

/*#include <iostream>
int main() {
    int a, b;
    std::cin >> a >> b;
    if(a%2 == 1 || b%2 == 1) {
        std::cout << "YES" << std::endl;
    }
    else {
        std::cout << "NO" << std::endl;
    }
    return 0;
}
*/


// g)

/*#include <iostream>
int main() {
    int a, b;
    std::cin >> a >> b;
    if(a%2 == 1) {
        std::cout << "YES" << std::endl;
    }
    else if(b%2 == 1) {
        std::cout << "YES" << std::endl;
    }
    else {
        std::cout << "NO" << std::endl;
    }
    return 0;
}*/


// d)

/*#include <iostream>
int main() {
    int a, b;
    std::cin >> a >> b;
    if(a%2==1 && b%2==1) {
        std::cout << "YES" << std::endl;
    }
    else if(a%2 == 0 && b%2 == 0) {
        std::cout << "YES" << std::endl;
    }
    else {
        std::cout << "NO" << std::endl;
    }
    return 0;
}*/


// 2 - a)


/*#include <iostream>
int main() {
    int a, b, c;
    std::cin >> a >> b >> c;
    if(a==0 || b==0 || c==0) {
        std::cout << "YES" << std::endl;
    }
    else {
        std::cout << "NO" << std::endl;
    }
    return 0;
}*/


// b)

/*#include <iostream>
int main() {
    int a, b, c;
    std::cin >> a >> b >> c;
    if(a == 5 && b != 5 && c != 5) {
        std::cout << "YES" << std::endl;
    }
    else if(b == 5 && a != 5 && c != 5) {
        std::cout << "YES" << std::endl;
    }
    else if(c == 5 && a!=5 && b!=5) {
        std::cout << "YES" << std::endl;
    }
    else {
        std::cout << "NO" << std::endl;
    }
    return 0;
}*/



// g)
/*
#include <iostream>
int main() {
    int a, b, c;
    std::cin >> a >> b >> c;
    if(a!=b && b!=c && a!=c) {
        std::cout << "YES" << std::endl;
    }
    else {
        std::cout << "NO" << std::endl;
    }
    return 0;
}*/



// d)

/*#include <iostream>
int main() {
    int a, b, c;
    std::cin >> a >> b >> c;
    if(a==b) {
        std::cout << "YES" << std::endl;
    }
    else if(b == c) {
        std::cout << "YES" << std::endl;
    }
    else if(a == c) {
        std::cout << "YES" << std::endl;
    }
    else {
        std::cout << "NO" << std::endl;
    }
    return 0;
}*/




// e)


/*#include <iostream>
int main() {
    int a, b, c;
    std::cin >> a >> b >> c;
    if(a<0 || b<0 || c<0) {
        std::cout << "YES" << std::endl;
    }
    else {
        std::cout << "NO" << std::endl;
    }
    return 0;
}


*/



// 3 - a)

/*#include <iostream>
int main() {
    int a, b, c;
    std::cin >> a >> b >> c;
    if(a>0 && b>0 && c>0) {
        std::cout << "YES" << std::endl;
    }
    else {
        std::cout << "NO" << std::endl;
    }
    return 0;
}*/



// b)

/*#include <iostream>
int main() {
    int a, b, c;
    std::cin >> a >> b >> c;
    if(a>0 || b>0 || c>0) {
        std::cout << "YES" << std::endl;
    }
    else {
        std::cout << "NO" << std::endl;
    }
    return 0;
}*/


// g)

/*#include <iostream>
int main() {
    int a, b, c;
    std::cin >> a >> b >> c;
    if(a>0) {
        std::cout << "YES" << std::endl;
    }
    else if(b>0) {
        std::cout << "YES" << std::endl;
    }
    else if(c>0) {
        std::cout << "YES" << std::endl;
    }
    else {
        std::cout << "NO" << std::endl;
    }
    return 0;


}*/



// d)

/*#include <iostream>
int main() {
    int a, b, c;
    std::cin >> a >> b >> c;
    if(a>0 && b>0) {
        std::cout << "YES" << std::endl;
    }
    else if(b>0 && c>0) {
        std::cout << "YES" << std::endl;
    }
    else if(a>0 && c>0) {
        std::cout << "YES" << std::endl;
    }
    else {
        std::cout << "NO" << std::endl;
    }
    return 0;
}*/


// e)

/*#include <iostream>
int main() {
    int a, b, c;
    std::cin >> a >> b >> c;
    if(a==b || b==c || a==c) {
        std::cout << "YES" << std::endl;
    }
    else {
        std::cout << "NO" << std::endl;
    }
    return 0;
}*/


// z)

/*#include <iostream>
int main() {
    int a, b, c;
    std::cin >> a >> b >> c;
    if((a>0 && b<0) || (a<0 && b>0)) {
        std::cout << "YES" << std::endl;
    }
    else if((a<0 && b>0) || (a>0 && c<0)) {
        std::cout << "YES" << std::endl;
    }
    else if((b>0 && c<0) || (b<0 && c>0)) {
        std::cout << "YES" << std::endl;
    }
    else {
        std::cout << "NO" << std::endl;
    }
    return 0;
}*/


// 4 - a)

/*#include <iostream>
int main() {
    unsigned int a;
    std::cin >> a;
    if((a>9 && a<100) && (a%2==0)) {
        std::cout << "YES" << std::endl;  
    }
    else {
        std::cout << "NO" << std::endl;
    }
    return 0;
}
*/


// b)


/*#include <iostream>
int main() {
    unsigned int a;
    std::cin >> a;
    if((a>99 && a<1000) && (a%2==1)) {
        std::cout << "YES" << std::endl;
    }
    else {
        std::cout << "NO" << std::endl;
    }
    return 0;
}
*/



// 5 - a)

/*#include <iostream>
int main() {
    int a;
    int x, y, z;
    std::cin >> a;
    if(a>99 && a<1000) {
        std::cout << a << std::endl;
    }
    x = a/100;
    a%=100;
    y = a/10;
    a%=10;
    z = a;
    if(x!=y && x!=z && y!=z) {
        std::cout << "YES" << std::endl;
    }
    else {
        std::cout << "NO" << std::endl;
    }
    return 0;
}*/


// b


/*#include <iostream>
int main() {
    int a;
    int x, y, z;
    std::cin >> a;
    if(a>99 && a<1000) {
        std::cout << a << std::endl;
    }
    x = a/100;
    a%=100;
    y = a/10;
    a%=10;
    z = a;
    if(x<y && y<z && x<z) {
        std::cout << "YES" << std::endl;
    }
    else {
        std::cout << "NO" << std::endl;
    }
    return 0;
}
*/


// g)


/*#include <iostream>
int main() {
    int a;
    int x, y, z;
    std::cin >> a;
    if(a>99 && a<1000) {
        std::cout << a << std::endl;
    }
    x = a/100;
    a%=100;
    y = a/10;
    a%=10;
    z = a;
    if(x!=y && x==z && y!=z) {
        std::cout << "YES" << std::endl;
    }
    else if(x==y && x==z && y==z) {
        std::cout << "YES" << std::endl;
    }
    else {
        std::cout << "NO" << std::endl;
    }
    return 0;
}
*/



//6 - a)

#include <iostream>
int main() {
    
    return 0;
}
















