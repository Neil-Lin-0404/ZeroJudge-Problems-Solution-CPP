#include <cstdio>
#include <vector>
#include <string>

int main() {
    int n;
    std::vector<std::string> out;
    while (scanf("%d", &n) != EOF) {
        if (n > 0 && (n & (n - 1)) == 0)
            out.push_back("Yes\n");
        else
            out.push_back("No\n");
    }
    for (auto& s : out)
        printf("%s", s.c_str());
}

// Made By GPT like what the fuck is this ?
//  I/O enhance holy man