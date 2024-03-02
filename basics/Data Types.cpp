int dataTypes(string type)
{
    // Write your code here
    int val;
    if (type == "Integer")
        val = 4;
    else if (type == "Long")
        val = 8;
    else if (type == "Float")
        val = 4;
    else if (type == "Double")
        val = 8;
    else if (type == "Character")
        val = 1;
    return val;
}
