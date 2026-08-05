#include<iostream.h>
#include<conio.h>
#include<string>

class patient
{
protected:
  string pet_name;
  int age;
  char sex;

 public:
   void getpatient()
   {
     cout << " Enter patient Name:";
	cin>> pat_name;
	cout<< "Enter Age:";
	cin>> age;
	cout<< " Enter sex (M/F):";
	cin>> sex;
	}
 };

 class IPD
 {
 protected:
      int ward_no,bed_no;
      float charge_per day;

  public:
    void getIPD()
    {
      cout<< " Enter ward no:";
      cin>> ward_no;
      cout<< "Enter bed no:";
      cin>> bed_no;
      cout<< "Enter charge per day:";
      cin>> charge_per_day;
      }
};

class IPD_patient : public
patient, public IPD
{
private:
   int no_of_days_admitted;

   public:
       void getdata()
       {
	 getpatient();
	 getIPD();

	 cout << " Enter number of days Admitted: ";
	 cin>> no_of days_admitted;
	 }
	 void display()
	 {
	   if (no_of_days_admitted>5)
	   {
	     cout << "\n---
	     patient information ---" endl;
		  cout << "patient
	     name: " << pat_name<< endl;
		   cout << "age" << age << endl;
		    cout<< "sex: " << sex << endl;
		    cout<< "ward no:"<< ward_no << endl;
		    cout<< "bed no:" << bed_no << endl;
		    cout<< " charge per day:" << charge_per_days << endl;
		    cout << "days Admitted:"<<no_of_days_admitted<< endl;
		    cout << " total charge" << charge_per_day *
		    no_of_days_admitted << endl;
		      }
		      else
		      {
		       cout << "\n patient admitted for 5 days or less:"<< endl;
		       }
		    }
		};
		int main()
		{
		IPD_patient p;

		p.getdata();
		p.display();

		getch();
    }