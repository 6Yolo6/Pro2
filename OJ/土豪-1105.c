int main1105()
{
    int n;
    scanf("%d", &n);
    int x, y, z;
    scanf("%d%d%d", &x, &y, &z);
    int i, j;
    int  _x = 0, z_ = 0;
    for (i = 1; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            if ((i * 10000 + x * 1000 + y * 100 + z * 10 + j) % n == 0)
            {
                _x = i;
                z_ = j;
            }
        }
    }
    if (_x == 0 && z_ == 0)
        printf("%d", 0);
    else
        printf("%d %d %d", _x, z_, (_x * 10000 + x * 1000 + y * 100 + z * 10 + z_) / n);
    return 0;
}