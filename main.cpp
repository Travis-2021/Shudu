#include <iostream>
#include <unistd.h>
#include <cstdlib>

using namespace std;

// m, r, u需要与n选项一起使用，否则需要报错！
struct OptCheck {
    bool c;
    bool s;
    bool n;
    bool m;
    bool r;
    bool u;


};


int main(int argc, char *argv[]) {
    int outOpt = 0;
    const char *optStr = "c:s:n:m:r:u";
    int num = 0;

    while ((outOpt = getopt(argc, argv, optStr)) != -1) {
        switch (outOpt) {
            case 'c':
//                cout<<"HAVE option: -c"<<endl;
//                cout<<"The argument of -c: "<<optarg<<endl;
                num = atoi(optarg);
                if ((num < 1) || (num > 1000000)) {
                    cout << "数独终盘数量范围：1~1000000，请重新输入。" << endl;
                    exit(1);
                }

                break;
            case 's':
//                cout<<"HAVE option: -s"<<endl;
//                cout<<"The argument of -s: "<<optarg<<endl;
                break;
            case 'n':
//                cout<<"HAVE option: -n"<<endl;
//                cout<<"The argument of -n: "<<optarg<<endl;
                if ((num < 1) || (num > 10000)) {
                    cout << "游戏数量范围：1~10000，请重新输入。" << endl;
                    exit(1);
                }

                break;
            case 'm':
//                cout<<"HAVE option: -m"<<endl;
//                cout<<"The argument of -m: "<<optarg<<endl;
                if ((num < 1) || (num > 3)) {
                    cout << "游戏难度范围：1~3，请重新输入。" << endl;
                    exit(1);
                }

                break;
            case 'r':
//                cout<<"HAVE option: -r"<<endl;
//                cout<<"The argument of -r: "<<optarg<<endl;
                if ((num < 20) || (num > 55)) {
                    cout << "挖空的数量范围：20~55，请重新输入。" << endl;
                    exit(1);
                }
                break;
            case 'u':
//                cout<<"HAVE option: -u"<<endl;
                break;
            case '?':
//                cout<<"Unknown option!"<<endl;
                exit(1);
        }

    }


    return 0;
}
