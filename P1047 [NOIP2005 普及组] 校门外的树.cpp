// code_1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int main()
{
    //std::cout << "Hello World!\n";
    int l, m;
    cin >> l >> m;
    //cout << l << m;
    int u[100], v[100];
    for (int i = 0; i < m; i++)
    {
        cin >> u[i] >> v[i];
        for (int j = 0; j < i; j++)
        {
            if (u[i] <= u[j] && v[i] >= v[j])
            {
                u[j] = 0;
                v[j] = -1;
                continue;
            }
            if (u[i] >= u[j] && u[i]<=v[j])
            {
                u[i] = v[j]+1;//重复的不计算
            }
            if (v[i] <= v[j]&&v[i]>=u[j])
            {
                v[i] = u[j]-1;
            }
        }
    }
    l = l + 1;//树比路长多1棵
    int ca;
    for (int i = 0; i < m; i++)
    {
        ca = v[i] - u[i]+1;
        //cout << v[i] << " " << u[i] << "qq";
        //cout << ca<<"\t";
        if (ca < 0)
            continue;
        l -= ca;
    }
    cout << l;
    return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件

