//#include<stdio.h>
//#include<string.h>
//#include<iostream>
//#include<algorithm>
//#define MAXN 2000000+5
//using namespace std;
//char arr[MAXN],s[MAXN];
//int p[MAXN],len;
//void Manacher()
//{
//    /* �Ƚ���ż����������� */
//    len=strlen(arr);
//    s[0]='$';    // ��ֹԽ��
//    s[1]='#';
//    for(int i=0;i<len;i++)
//    {
//        s[i*2+2]=arr[i];
//        s[i*2+3]='#';
//    }
//    len=len*2+2;
//    s[len]='\0';
//    /* �㷨���� */
//    int maxx=0,id=0;
//    for(int i=2;i<len;i++)
//    {
//        if(maxx>i)
//            p[i]=min(p[2*id-i],maxx-i);
//        // 2*id-i�ǹ��ڵ�ǰ��ַ��������е���i��Ӧ��λ��
//        // ���iλ���������ַ���������൱������idΪ���ģ�
//        // ��i��Ӧ��λ�õ��ַ�������ͬ��
//        // maxx-i�������i��Ļ����ַ������ȳ�������ַ����ĳ��ȣ�
//        // maxx����ַ�����ȷ�������Ա���ӳ���Ϊmaxx-i��ʼ
//        else
//            p[i]=1;
//        while(s[i+p[i]]==s[i-p[i]])
//            p[i]++;
//        if(i+p[i]>maxx)
//        {
//            maxx=i+p[i];
//            id=i;
//        }
//    }
//    for(int i=2;i<len*2+2;i++)
//        cout<<p[i]<<" ";cout<<endl;
//
//}
//int main()
//{
//    freopen("in","r",stdin);
//    int n;
//    scanf("%d",&n);
//    while(n--)
//    {
//        memset(p,0,sizeof(p));
//        scanf("%s",arr);
//        Manacher();
//        printf("%d\n",p[max_element(p,p+len)-p]-1); // max_element(p,p+len)//�����������������ֵ������
//    }
//    return 0;
//}