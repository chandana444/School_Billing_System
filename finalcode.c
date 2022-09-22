#include<stdio.h>
#include<string.h>
#include<time.h>
int main(){
printf("\t\t\t\t\tSRM SCHOOL\n");
int grade,regno,tutfee,scholar,netfee,transfee,transpay,temp,transbal,tutbal,tutpay,temp1;
char *name,*gname;
printf("WELCOME!\n");
label3:printf("ENTER REGISTRATION NUMBER:");
scanf("%d",&regno);
printf("REGISTRATION NUMBER : %d\n",regno);
switch(regno){
	case 2101001:
    {name="Mahendra Bahubali";
    gname="Amerendra Bahubali";
    grade=1;
    tutfee=10000;
    scholar=5;
    transfee=7000;
    tutbal=6000;
    transbal=4000;
    break;}
    case 2101002:
    {name="Ballala Deva";
    gname="Bhijjal Deva";
    grade=1;
    tutfee=10000;
    scholar=0;
    transfee=8000;
    tutbal=5500;
    transbal=4500;
    break;}
    case 2101003:
    {name= "Avanthika Devi";
    gname="Sivagami Devi";
    grade=1;
    tutfee=10000;
    scholar=0;
    transfee=8500;
    tutbal=6000;
    transbal=5000;
    break;}
    case 2101004:
    {
    name="Shiva Raja";
    gname="Kalakeya Raja";
    grade=1;
    tutfee=10000;
    scholar=0;
    transfee=9000;
    tutbal=6500;
    transbal=5000;
    break;}
    case 2102001:
    {name="Vijay Chaudhari";
    gname="Sunita Choudhari";
    grade=2;
    tutfee=20000;
    scholar=5;
    transfee=8500;
    tutbal=6500;
    transbal=5000;
    break;}
    case 2102002:
    {name="Naga Chaitanya Akkineni";
    gname="Nagarjuna Akkineni";
    grade=3;
    tutfee=30000;
    scholar=0;
    transfee=7500;
    tutbal=9000;
    transbal=4000;
    break;}
    case 2102003:
    {name="Arjun Singh";
    gname="Kabeer Das";
    grade=2;
    tutfee=20000;
    scholar=0;
    transfee=8000;
    tutbal=6000;
    transbal=5000;
    break;}
    case 2102004:
    {name="Sreeja Kalyan";
    gname="Chiranjeevi Shetty";
    grade=2;
    tutfee=20000;
    scholar=0;
    transfee=7500;
    tutbal=5500;
    transbal=5000;
    break;}
    case 2103001:
    {name="Karthika Sharma";
    gname="Radha Sharma";
    grade=3;
    tutfee=30000;
    scholar=0;
    transfee=7500;
    tutbal=18000;
    transbal=4000;
    break;}
    case 2103002:
    {name="Shruti Hassan";
    gname="Kamal Hassan";
    grade=3;
    tutfee=30000;
    scholar=0;
    transfee=9500;
    tutbal=16000;
    transbal=6000;
    break;}
    case 2103003:
    {name="Siddharth Roy";
    gname="Charishma Varma";
    grade=3;
    tutfee=30000;
    scholar=5;
    transfee=8500;
    tutbal=16500;
    transbal=3500;
    break;}
    case 2103004:
    {name="Dhanush Vasa";
    gname="Ramesh Vasa";
    grade=3;
    tutfee=30000;
    scholar=0;
    transfee=8000;
    tutbal=17000;
    transbal=4500;
    break;}
	case 2104001:
	{name="Shaik Haseena";
    gname="Shaik Khadar Basha";
	grade=4;
	tutfee=40000;
	scholar=10;
	transfee=10000;
	tutbal=25000;
	transbal=7000;
	break;}
case 2104002:
	{name="Gaddam Yacob";
	gname="Gaddam Mariya";
	grade=4;
	tutfee=40000;
	scholar=0;
	transfee=7500;
	tutbal=20000;
	transbal=6000;
	break;
	}
	case 2104003:
		{name="Chaluvadi Seetha Mahalakshmi";
		gname="Yarramasu Ramayya";
		grade=4;
		tutfee=40000;
		scholar=0;
		transfee=15000;
		tutbal=30000;
		transbal=8000;
		break;
		}
		case 2104004:
			{name="Moram Nikhil";
			gname="Moram Joseph";
			grade=4;
			tutfee=40000;
			scholar=0;
			transfee=7000;
			tutbal=0;
			transbal=1000;
			break;
			}
			case 2105001:
			{name="Mundru Sathvika";
			gname="Mundru Jaydev";
			grade=5;
			tutfee=50000;
			scholar=0;
			transfee=11000;
			tutbal=30000;
			transbal=10000;
			break;
			}
			case 2105002:
				{name="Kolluru Abhishek";
				gname="Narravula Ramarao";
				grade=5;
				tutfee=50000;
				scholar=10;
				transfee=10000;
				tutbal=50000;
				transbal=7000;
				break;
				}
				case 2105003:
					{
					name="Shaik Samad";
					gname="Shaik Saad";
					grade=5;
					tutfee=50000;
					scholar=0;
					transfee=8000;
					tutbal=1000;
					transbal=0;
					break;
				    }
				    case 2105004:
				    	{name="Dammati Sai Supriya";
				    	gname="Dammati Anupama";
				    	grade=5;
				    	tutfee=50000;
				    	scholar=0;
				    	transfee=10000;
				    	transbal=5000;
				    	tutbal=45000;
				    	break;
				  }
				  case 2106001:
				  	{name="Shaik Faizuddin";
				  	gname="Shaik Saad";
				  	grade=6;
				  	tutfee=60000;
				  	scholar=0;
				  	transfee=8000;
				  	tutbal=2000;
				  	transbal=1000;
				  	break;
					  }
					  case 2106002:
					  	{name="Kaviti Sreeja";
					  	gname="Kaviti Sreedhar";
					  	grade=6;
					  	tutfee=60000;
					  	scholar=0;
					  	transfee=12000;
					  	tutbal=35000;
					  	transbal=7000;
					  	break;
						  }
						  case 2106003:
						  	{name="Maramreddy Vikas Narayana";
						  	gname="Maramreddy Venkat Reddy";
						  	grade=6;
						  	scholar=0;
						  	transfee=14000;
						  	tutfee=60000;
						  	tutbal=40000;
						  	transbal=7000;
						  	break;
							  }
							  case 2106004:
							  	{name="Sangam Daniel";
							  	gname="Sangam Sudhakar";
							  	grade=6;
							  	scholar=10;
							  	tutfee=60000;
							  	transfee=15000;
							  	tutbal=40000;
							  	transbal=7500;
							  	break;
								  }
								  case 2107001:
{name="Veer Goyal";
gname="Sanjay Goyal";
grade=7;
tutfee=70000;
scholar=20;
transfee=9000;
tutbal=60000;
transbal=5000;
break;}


case 2107002:
{name="Kushal Singhi";
gname="Seema Singhi";
grade=7;
tutfee=70000;
scholar=0;
transfee=8000;
tutbal=70000;
transbal=4000;
break;}


case 2107003:
{name="Shweta Parashar";
gname="Akash Parashar";
grade=7;
tutfee=70000;
scholar=0;
transfee=11000;
tutbal=60000;
transbal=6000;
break;}


case 2107004:
{name="Kritika Jain";
gname="Vijay Goyal";
grade=7;
tutfee=70000;
scholar=0;
transfee=12000;
tutbal=80000;
transbal=7000;
break;}



case 2108001:
{name="Shreyansh Gupta";
gname="Prakhar Gupta";
grade=8;
tutfee=80000;
scholar=0;
transfee=9000;
tutbal=60000;
transbal=5000;
break;}


case 2108002:
{name="Simran Agrawal";
gname="Ajay Agrawal";
grade=8;
tutfee=80000;
scholar=20;
transfee=10000;
tutbal=70000;
transbal=7000;
break;}


case 2108003:
{name="Lakshya Mehra";
gname="Vibha Mehra";
grade=8;
tutfee=80000;
scholar=0;
transfee=11000;
tutbal=80000;
transbal=7000;
break;}


case 2108004:
{name="Mansi Mundra";
gname="Abhishek Mundra";
grade=8;
tutfee=80000;
scholar=0;
transfee=9000;
tutbal=60000;
transbal=5000;
break;}

case 2109001:
{name="Neha Jain";
gname="Pavan Jain";
grade=9;
tutfee=90000;
scholar=0;
transfee=10000;
tutbal=70000;
transbal=5000;
break;}


case 2109002:
{name="Nandini Rathi\n";
gname="Shilpa Rathi";
grade=9;
tutfee=90000;
scholar=20;
transfee=11000;
tutbal=60000;
transbal=7000;
break;}

case 2109003:
{name="Anna Mathews";
gname="David Mathews";
grade=9;
tutfee=90000;
scholar=0;
transfee=9000;
tutbal=70000;
transbal=5000;
break;}


case 2109004:
{name="Harsh Agrawal";
gname="Vikas Agrawal";
grade=9;
tutfee=90000;
scholar=0;
transfee=9000;
tutbal=80000;
transbal=5000;
break;}
								  case 2110001 :
{name= "Draco Malfoy";
 gname= "Narcissa Malfoy";
grade=10;
tutfee=100000;
scholar=0;
transfee=12000;
tutbal=90000;
transbal=10000;
break;}

case 2110002 :
{name=" Hermione Granger";
 gname="Stevie Granger";
grade=10;
tutfee=100000;
scholar=50;
transfee=15000;
tutbal=75000;
transbal=5000;
break;}

case 2110003 :
{name= "Harry Potter";
 gname= "Sirius Black";
grade=10;
tutfee=100000;
scholar=0;
transfee=7500;
tutbal=85600;
transbal=7500;
break;}

case 2110004 :
{name= "Ron Weasley";
 gname=" Arthur Weasley";
grade=10;
tutfee=100000;
scholar=0;
transfee=13500;
tutbal=86000;
transbal=5000;
break;}

case 2111001 :
{name= "Luna Lovegood";
 gname="Xenophilius Lovegood";
grade=11;
tutfee=110000;
scholar=0;
transfee=8600;
tutbal=85000;
transbal=8000;
break;}

case 2111002 :
{name="Ginny Weasley";
 gname="Molly Weasley";
grade=11;
tutfee=110000;
scholar=30;
transfee=13500;
tutbal=87000;
transbal=45000;
break;}

case 2111003 :
{name="Tom Riddle";
 gname= "Merope Riddle";
grade=11;
tutfee=110000;
scholar=0;
transfee=15000;
tutbal=66000;
transbal=800;
break;}

case 2111004 :
{name= "Cho Chang";
 gname= "Robin Chang";
grade=11;
tutfee=110000;
scholar=0;
transfee=6000;
tutbal=90000;
transbal=4500;
break;}

case 2112001 :
{name= "George Weasley";
gname = "Molly Weasley";
grade=12;
tutfee=120000;
scholar=0;
transfee=13500;
tutbal=89000;
transbal=9000;
break;}

case 2112002 :
{name= "Fred Weasley";
gname = "Molly Weasley";
grade=12;
tutfee=120000;
scholar=0;
transfee=13500;
tutbal=89000;
transbal=9000;
break;}

case 2112003 :
{name= "Katie Bell";
gname = "Dean Bell";
grade=12;
tutfee=120000;
scholar=50;
transfee=12000;
tutbal=87000;
transbal=6900;
break;}

case 2112004 :
{name = "Lavender Brown";
 gname = "Miriam Brown";
grade=12;
tutfee=120000;
scholar=0;
transfee=14000;
tutbal=69000;
transbal=7000;
break;}
default: {
	
printf("Enter valid registration number.\n");	
goto label3;
break;}			
}
printf("NAME OF THE STUDENT : ");
for(temp=0;name[temp]!='\0';temp++){
	printf("%c",name[temp]);
}
printf("\nGUARDIAN'S NAME : ");
for(temp=0;gname[temp]!='\0';temp++){
	printf("%c",gname[temp]);
}
printf("\nGRADE : %d\nTOTAL TUTION FEE : %d\nSCHOLARSHIP(%%) : %d\nNET TUTION FEE : %d\nBALANCE TUTION FEE : %d\nTRANSPORT FEE : %d\nBALANCE TRANSPORT FEE : %d\n"
,grade,tutfee,scholar,tutfee-tutfee*scholar/100,tutbal,transfee,transbal);
label1: printf("Amount paid towards tution fee : \n");
scanf("%d",&tutpay);
label2: printf("Amount paid towards transport fee : ");
scanf("%d",&transpay);
if (tutpay<=tutbal&&tutpay!=0){temp1=tutbal-tutpay;
tutbal=temp1;
time_t tm;
time(&tm);

printf("\t\t\t\t\tSRM SCHOOL\n\t\t\t\t\tFEE RECEIPT\nDATE & TIME : %s\nREGISTRATION NUMBER : %d\nNAME OF THE STUDENT : ",ctime(&tm),regno);
for(temp=0;name[temp]!='\0';temp++){
	printf("%c",name[temp]);
}

printf("\nGUARDIAN'S NAME : ");
for(temp=0;gname[temp]!='\0';temp++){
	printf("%c",gname[temp]);
}
printf("\nGRADE : %d\nTUITION FEE PAID : %d\nBALANCE : %d\n",grade,tutpay,tutbal);}
else if(tutpay>tutbal) {
printf("Amount paid exceeds balance tuition fee.\n");

goto label1;}
if(transpay<=transbal&&transpay!=0){
temp1=transbal-transpay;
transbal=temp1;

time_t tm;
time(&tm);

printf("\t\t\t\t\tSRM SCHOOL\n\t\t\t\t\tFEE RECEIPT\nDATE & TIME : %s\nREGISTRATION NUMBER : %d\nNAME OF THE STUDENT : ",ctime(&tm),regno);
for(temp=0;name[temp]!='\0';temp++){
	printf("%c",name[temp]);
}

printf("\nGUARDIAN'S NAME : ");
for(temp=0;gname[temp]!='\0';temp++){
	printf("%c",gname[temp]);
}
printf("\nGRADE : %d\nTRANSPORT FEE PAID : %d\nBALANCE : %d",grade,transpay,transbal);}
else if(transpay>transbal) {
printf("Amount paid exceeds balance transport fee.\nEnter valid amount.\n");
goto label2;}
else if(transpay==0&&tutpay!=0){goto label;
}
else {
printf("Enter valid amount\n");
goto label1;}
label:
return 0;
}
