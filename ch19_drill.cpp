#include <vector>
#include <iostream>
#include <memory>

std::unique_ptr<std::vector<int>> suspicious()
{
    auto p = std::make_unique<std::vector<int>>();

    for (int i; std::cin >> i;)
    {
        if (i)
            p->push_back(i);
        else
            throw std::exception();
    }

    return p;
}

int main()
try
{
    auto p = suspicious();

    for (int i = 0; i < p->size(); ++i)
        std::cout << p->at(i) << ' ';
    std::cout << std::endl;

    return 0;
}
catch (std::exception &e)
{
    std::cerr << "Error!\n";
    return 1;
}