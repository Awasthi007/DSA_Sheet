string reverseWord(string str)
{
    
  //Your code here
  int j= str.length()-1;
  int i=0;
  
  while( i < j)
  {
      char temp = str[i];
      str[i] = str[j];
      str[j] = temp;
      i++;j--;
  }
  return str;
}
