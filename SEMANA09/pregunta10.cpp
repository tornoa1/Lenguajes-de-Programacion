bool verSiEsPar(int num)
{
    if (num % 2 == 0){
        return true;
    }else{
        return false;
    }
}

void operar(int num1, int num2, int* res)
{
    bool num1Par = verSiEsPar(num1);
    bool num2Par = verSiEsPar(num2);

    if(num1Par && num2Par)
    {
        *res = num1 + num2;
    }else if(!num2 && !num2Par)
    {
        *res = num1 - num2;
    }else{
        *res = num1 * num2;
    }
}