

bool isValid(char * s){
    int len = strlen(s);
    if (len % 2)    return false;
    else if (len == 0)  return true;
    int top = -1;
    char stack[len];
    for (int i = 0; i < len; i++){
        if (s[i] == '(')    stack[++top] = s[i]+1; // ascii ')'
        else if (s[i] == '{' || s[i] == '[')    stack[++top] = s[i]+2; // ascii '}' and ']'
        else if (top == -1)     return false;
        else if (s[i] == stack[top--])  continue;
        else    return false;
    }
    
    if (top == -1)  return true;
    else    return false;
}