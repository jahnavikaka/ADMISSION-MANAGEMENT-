#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class student_side
{
    public:
    void ac_qu();
    void per_info();
    void par_cour();
    void ans_que();
};
class uni_side{
    public:
    void ver_stu();
    void put_com();
    void fee_info();
    void ask_que();
};
void student_side ::ac_qu(){
    int eap;
    string ert;
    cout<<"                                Welcome to SRM AP\nLet's check your academic qualification to become a part of our family of SRM\nEnter your Name:";
    cin>>ert;
    cout<<"Enter your rank in EAPCET:";
    cin>>eap;
    if(eap<=10000){
        cout<<"Congratualations!You are eligible to join SRM AP\nFill the following information fields:\n";
        fstream abc;
    ofstream fout;
    ifstream fin;
    fin.open("feedetails.txt");
    fout.open("feedetails.txt",ios::app);
    if(fin.is_open()){
        fout<<"----------------------------------------\nStudent Name:"<<ert<<"\nEAPCET RANK:"<<eap;
        if(eap>=1&&eap<=1000){
            fout<<"\nActual fee:2,00,000\nConcession percentage applied:100%\nFEE to be paid by the candidate:0 INR\n";
        }
        else if(eap>1000&&eap<=2000){
            fout<<"\nActual fee:2,00,000\nConcession percentage applied:90%\nFEE to be paid by the candidate:20,000 INR\n";
        }
        else if(eap>2000&&eap<=3000){
            fout<<"\nActual fee:2,00,000\nConcession percentage applied:80%\nFEE to be paid by the candidate:40,000 INR\n";
        }
        else if(eap>3000&&eap<=4000){
            fout<<"\nActual fee:2,00,000\nConcession percentage applied:70%\nFEE to be paid by the candidate:60,000 INR\n";
        }
        else if(eap>5000&&eap<=6000){
            fout<<"\nActual fee:2,00,000\nConcession percentage applied:60%\nFEE to be paid by the candidate:80,000 INR\n";
        }
        else if(eap>6000&&eap<=7000){
            fout<<"\nActual fee:2,00,000\nConcession percentage applied:50%\nFEE to be paid by the candidate:1,00,000 INR\n";
        }
        else if(eap>7000&&eap<=8000){
            fout<<"\nActual fee:2,00,000\nConcession percentage applied:40%\nFEE to be paid by the candidate:1,20,000 INR\n";
        }
        else if(eap>8000&&eap<=9000){
            fout<<"\nActual fee:2,00,000\nConcession percentage applied:30%\nFEE to be paid by the candidate:1,40,000 INR\n";
        }
        else{
            fout<<"\nActual fee:2,00,000\nConcession percentage applied:0%\nFEE to be paid by the candidate:2,00,000 INR\n";
        }
    }
    fin.close();
    fout.close();
    }
    else{
        cout<<"Seems you are not yet eligible to enter!Better luck next time!All the best.We'll be waiting!!!";
    }
}
void student_side ::per_info(){
    string nam,dob,f_name,m_name,f_occ,m_occ,f_sal,ten_per,in_per,sch_name,clg_name,gen;
    cout<<"----------------------------------------\nName:";
    cin>>nam;
    cout<<"Date of birth(DD/MM/YYYY):";
    cin>>dob;
    cout<<"Gender(male or female):";
    cin>>gen;
    cout<<"Father Name:";
    cin>>f_name;
    cout<<"Mother Name:";
    cin>>m_name;
    cout<<"Father's Occupation:";
    cin>>f_occ;
    cout<<"Mother's Occupation:";
    cin>>m_occ;
    cout<<"Annual Income of father:";
    cin>>f_sal;
    cout<<"Secondary school name:";
    cin>>sch_name;
    cout<<"Secondary schooling percentage:";
    cin>>ten_per;
    cout<<"Intermediate college name:";
    cin>>clg_name;
    cout<<"Intermediate percentage:";
    cin>>in_per;
    fstream pbc;
    ofstream fout;
    ifstream fin;
    fin.open("a1.txt");
    
    fout.open("a1.txt",ios::app);
    if(fin.is_open()){
        fout<<"----------------------------------------\nName:"<<nam<<"\nDate of birth(DD/MM/YYYY):"<<dob<<"\nGender(male or female):"<<gen<<"\nFather Name:"<<f_name;
        fout<<"\nMother Name:"<<m_name<<"\nFather's Occupation:"<<f_occ<<"\nMother's Occupation:"<<m_occ<<"\nAnnual Income of father:";
        fout<<f_sal<<"\nSecondary school name:"<<sch_name<<"\nSecondary schooling percentage:"<<ten_per<<"\nIntermediate college name:"<<clg_name<<"\nIntermediate percentage:"<<in_per<<"\n";
    }
    fin.close();
    fout.close();

    cout<<"Good!Now lets go for choosing a specialization\nChoose a specialization given options\n";
}
void student_side ::par_cour(){
    string cour;
    char res;
    string oth_deg;
    cout<<"CSE\nCSE-AI\nCSE-AI-ML\nECE\nEEE\nMECH\nCIVIL\nBIO-TECH\n";
    cin>>cour;
    cout<<"Are you pursuing any other degree parallel to B.Tech?(Y/N):";
    cin>>res;
    if(res=='Y'||res=='y'){
        cout<<"Enter the name(s) of the other degree:";
        cin>>oth_deg;
        ofstream fout;
    ifstream fin;
        fin.open("a1.txt");
    fout.open("a1.txt",ios::app);
    if(fin.is_open()){
        fout<<"Choosen Branch:"<<cour<<"\nOther degree/course(out of university):"<<oth_deg<<"\n";
         }
    fin.close();
    fout.close();
    }
    else{
        ofstream fout;
    ifstream fin;
        fin.open("a1.txt");
    fout.open("a1.txt",ios::app);
    if(fin.is_open()){
        fout<<"Choosen Branch:"<<cour<<"\nOther degree/course(out of university):NIL\n";
         }
    fin.close();
    fout.close();
    }
}
void student_side ::ans_que(){
    string line,hgfw;
cout<<"Just a last step ahead :)\n";
cout<<"Fill in your answers for the below questions\n";
cout<<"(Note:Press '/' once you've completed filling your answer)\n";
const char *xc = "ansque.txt";
  ifstream in ( xc );
    bool empty = ( in.get(), in.eof() );
    if(empty){
        cout<<"-------------\nWhy do you want to study this subject/course/branch you have selected?\n";
        string hgf;
        while(hgf!="/"){
            getline(cin,hgf);
            if(hgf=="/"){
                break;
            }
        }
    cout<<"-------------\n";
        cout<<"What achievement are you most proud of?\n";
        string we;
        while(we!="/"){
            getline(cin,we);
            if(we=="/"){
                break;
            }
        }
    }
    else{
        ifstream losaq;
        losaq.open("ansque.txt");
while(getline(losaq,line)){
       cout<<line<<"\n";
       string hgfw;
        while(hgfw!="/"){
            getline(cin,hgfw);
            if(hgfw=="/"){
                break;
            }
        }
    }
}
    }
void uni_side ::ver_stu(){
    int l=0;
string line,hg,name="Name:";
cout<<"Enter the name of the student to check the info:";
cin>>hg;
cout<<"-----------------------STUDENT INFORMATION----------------------------------\n";
ifstream lo;
lo.open("a1.txt");
while(getline(lo,line)){
        l++;
    if(line==name+hg){
        l=10000000;
    }
    if(l!=1&&line=="----------------------------------------"&&l>10000000){
        break;
    }
    if(l>=10000000){
       cout<<line<<"\n";
    }
}
}
void uni_side::put_com(){
    cout<<"Type the comments you want to add(These will be displayed to student login page)\n";
    cout<<"((Note:Press '/' to get the comments updated))\n";
    fstream pbc;
    ofstream fout;
    ifstream fin;
    fin.open("comments.txt");
    fout.open("comments.txt",ios::app);
    if(fin.is_open()){
        string hgf;
        while(hgf!="/"){
            getline(cin,hgf);
            if(hgf=="/"){
                break;
            }
            fout<<hgf<<"\n";
        }
    }
    fin.close();
    fout.close();
}
void uni_side::fee_info(){
    int p=0;
string li,hgo,nameq="Student Name:";
cout<<"Enter the name of the student to check the info:";
cin>>hgo;
cout<<"-----------------------STUDENT FEE INFORMATION----------------------------------\n";
ifstream loq;
loq.open("feedetails.txt");
while(getline(loq,li)){
        p++;
    if(li==nameq+hgo){
        p=10000000;
    }
    if(p!=1&&li=="----------------------------------------"&&p>10000000){
        break;
    }
    if(p>=10000000){
       cout<<li<<"\n";
    }
}
}
void uni_side::ask_que(){
      cout<<"Type the questions you want to add(These will be posed to students at their login)\n";
    cout<<"((Note:Press '/' to get the comments updated))\n";
    fstream sdf;
    ifstream jkl;
    ofstream pra;
    pra.open("ansque.txt",ios::app);
    if(pra.is_open()){
        string hgf;
        while(hgf!="/"){
            getline(cin,hgf);
            if(hgf=="/"){
                break;
            }
            pra<<hgf;
        }
        pra.close();
    }
}
int main(){
    int choice;
    string polo;
    fstream abc;
    ofstream fout;
    ifstream fin;
    fin.open("feedetails.txt");
    if(fin){
    }
    else{
        fout.open("feedetails.txt",ios::out);
    }
    fin.close();
    fout.close();
    fin.open("a1.txt");
    if(fin){
    }
    else{
        fout.open("a1.txt",ios::out);
    }
    fin.close();
    fout.close();
    fin.open("comments.txt");
    if(fin){
    }
    else{
        fout.open("comments.txt",ios::out);
    }
    fin.close();
    fout.close();
    fin.open("ansque.txt");
    if(fin){
    }
    else{
        fout.open("ansque.txt",ios::out);
    }
    fin.close();
    fout.close();
    cout<<"                     SRM AP STUDENT ADMISSION MANAGEMENT SYSTEM\n";
    cout<<"---------------------------------------------------------------------------------------\n";
    cout<<"LOGIN AS:\n1.A STUDENT  2.UNIVERSITY END\n";
    cin>>choice;
    if(choice==1){
        student_side s;
        s.ac_qu();
        s.per_info();
        s.par_cour();
        s.ans_que();
        cout<<"Here are some comments from the university for your guidance\n";
const char *filename = "comments.txt";
       ifstream fin ( filename );
   bool empty = ( fin.get(), fin.eof() );
    if(empty){
        cout<<"-------------\nSet high personal and academic standards for yourself,and live up to them\nInvestigate study and test taking skills\nGet to know a wide range of people – faculty, staff, and students\nSeek out special opportunities.";
    }
    else{
        ifstream losa;
losa.open("comments.txt");
while(getline(losa,polo)){
       cout<<polo<<"\n";
}
    }
    }
    else if(choice==2){
        int pass=452310,op,pas;
        uni_side u;
        cout<<"Enter the password to access admission information:";
        cin>>pas;
        if(pas==pass){
            cout<<"Choose an option:\n1.Verify details of a student\n2.Add comments to a student\n3.Verify fee details of a student\n4.Additional questions to a student\n";
            cin>>op;
            if(op==1){
                u.ver_stu();
            }
            else if(op==2){
                    u.put_com();
            }
            else if(op==3){
                    u.fee_info();
            }
            else if(op==4){
                    u.ask_que();
            }
            else{
                cout<<"Wrong entry detected";
            }
        }
        else{
            cout<<"Password Mismatch!:(";
        }

    }
    else{
       cout<<"Choose a valid entry"<<endl;
}
}
