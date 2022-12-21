#include "ibar.h"
#include "foo.h"
#include <unordered_map>
using namespace std;
Foo::Foo(IBar& bar)
    :m_bar(bar) {};

bool Foo::baz(bool useQux) {
    if (useQux) {
        return m_bar.qux();
    } else {
        return m_bar.norf();
    }
}

void sliudingWindow(std::string s)
{
    std::unordered_map<char, int> window;
    int left = 0, right = 0;
    while (right < s.size()) {
        // c 是将移入窗口的字符
        char c = s[right];
        // 增大窗口
        right++;
        // 进行窗口内数据的一系列更新

        /**** debug 输出的位置 ****/
        // 注意在最终的解法代码中不要print
        // 因为IO操作很耗时，可能导致超时
        printf("window: [%d,%d] \n", left, right);

        // 判断左侧窗口是否要收缩
        while (false/*** window needs shrink ***/) {
            // d 是将移除窗口的字符
            char d = s[left];
            // 缩小窗口
            left++;
            // 进行窗口内数据的一系列更新
            // .....
        }
    }
}
