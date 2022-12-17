std::vector <int> merge(std::vector <int> a, std::vector <int> b)
{
    std::vector <int> c(a.size() + b.size());

    for (int i = 0; i < a.size(); i++)
    {
        c[i] = a[i];
    }

    for (int i = 0; i < b.size(); i++)
    {
        c[a.size() + i] = b[i];
    }

    return c;
}
