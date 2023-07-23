#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<time.h>
void admin();
void user();
void con_dis();
void con_edit();
void med_dis();
void med_edit();
void faq();
//Medicine Function
  char M_time[100][100];
  char M_name[100][100];
  char M_type[100][100];
  int M_dosage[100];
//Contacts Function
  char C_name[100][100];
  char C_phone[100][100];
void tim()
{
  time_t curtime;
  time(&curtime);
  printf("%s",ctime(&curtime));
}
void main()
{
  int p,c;
  clrscr();
  printf("************************************Welcome*************************************");
  printf("\t\t\tThe time is ");
  tim();
  printf("\n\n\n\n\n\t\t\t    ==========================");
  printf("\n\t\t\t    Old People Guidance System");
  printf("\n\t\t\t    ==========================");
  printf("\n\n\n\n\n\n\t\tENTER 0 to terminate the program");
  printf("\n\t\tENTER 1 if you are admin and 2 if you are a user\n");
  printf("					");
  scanf("%d",&c);
  printf("%d\n",c);
  if(c==0)
  {
    clrscr();
    printf("\n\n\n\n\n\n\nARE YOU SURE. PRESS 0 TO CONTINUE AND PRESS ANY NUMBER TO GO BACK TO LOGIN MENU ");
    printf("					       ");
    scanf("%d",&p);
    if(p==0)
    {
      exit(0);
    }
    else
    {
      main();
    }
  }
  else if(c==1)
  {
    admin();
  }
  else if(c==2)
  {
    user();
  }
  else
  {
    clrscr();
    main();
  }
  getch();
}
void admin()
{
  int c;
  clrscr();
  printf("************************************Welcome*************************************");
  printf("\t\t\tThe time is ");
  tim();
  printf("\n\n\n\n\n\t\t\t    ==========================");
  printf("\n\t\t\t    Old People Guidance System");
  printf("\n\t\t\t    ==========================");
  printf("\n\n\n\n\n\n\t\tENTER 0 to return to login menu\n");
  printf("\t\tENTER 1 if you want to update your medicine log\n");
  printf("\t\tENTER 2 if you want to update your contact list\n");
  printf("\t\t\t\t\t");
  scanf("%d",&c);
  if(c==0)
  {
    main();
  }
  else if(c==1)
  {
    med_edit();
  }
  else if(c==2)
  {
    con_edit();
  }
  else
  {
    admin();
  }

}
void user()
{
  int c;
  clrscr();
  printf("************************************Welcome*************************************");
  printf("\t\t\tThe time is ");
  tim();
  printf("\n\n\n\n\n\t\t\t    ==========================");
  printf("\n\t\t\t    Old People Guidance System");
  printf("\n\t\t\t    ==========================");
  printf("\n\n\n\n\n\n\t\tENTER 0 To return to login menu\n");
  printf("\t\tENTER 1 if you want to see your medicine log\n");
  printf("\t\tENTER 2 if you want to see your contact list\n");
  printf("\t\tENTER 3 if you want to open FAQ \n");
  printf("\t\t\t\t\t");
  scanf("%d",&c);
  if(c==0)
  {
    main();
  }
  else if(c==1)
  {
    med_dis();
  }
  else if(c==2)
  {
    con_dis();
  }
  else if(c==3)
  {
    faq();
  }
  else
  {
    user();
  }
}
//Contacts Function
void con_dis()
{
  int i,p,l;
  clrscr();
  printf("\t\t\t\tContacts\n");
  printf("********************************************************************************");
  printf("\t\t     The time is ");
  tim();
  printf("\n\t\tPress 0 to return to main menu");
  printf("\n\t\tPress 1 to go to page 1 of contact list");
  printf("\n\t\tPress 2 to go to page 2 of contact list");
  printf("\n\t\tPress 3 to go to page 3 of contact list\n");
  printf("\n\t\tPress 4 to go to page 4 of contact list\n");
  scanf("%d",&p);
  switch(p)
  {
    case 0:
      clrscr();
      user();
      break;
    case 1:
      clrscr();
      printf("\t\t\t\tPAGE 1\n");
      for(i=0;i<5;i++)
      {
	printf("\nName        \t| ");
	printf("%s\t\t",C_name[i]);
	printf("\nPhone Number\t| ");
	printf("%s\t",C_phone[i]);
      }
      printf("\nPress 0 return to previous page");
      scanf("%d",&l);
      if(l==0)
      {
	con_dis();
      }
      break;
    case 2:
      clrscr();
      printf("\t\t\t\tPAGE 1\n");
      for(i=5;i<10;i++)
      {
	printf("\nName        \t| ");
	printf("%s\t\t",C_name[i]);
	printf("\nPhone Number\t| ");
	printf("%s\t",C_phone[i]);
      }
      printf("\nPress 0 return to previous page");
      scanf("%d",&l);
      if(l==0)
      {
	con_dis();
      }
      break;
    case 3:
      clrscr();
      printf("\t\t\t\tPAGE 1\n");
      for(i=10;i<15;i++)
      {
	printf("\nName        \t| ");
	printf("%s\t\t",C_name[i]);
	printf("\nPhone Number\t| ");
	printf("%s\t",C_phone[i]);
      }
      printf("\nPress 0 return to previous page");
      scanf("%d",&l);
      if(l==0)
      {
	con_dis();
      }
      break;
    case 4:
      clrscr();
      printf("\t\t\t\tPAGE 1\n");
      for(i=15;i<20;i++)
      {
	printf("\nName        \t| ");
	printf("%s\t\t",C_name[i]);
	printf("\nPhone Number\t| ");
	printf("%s\t",C_phone[i]);
      }
      printf("\nPress 0 return to previous page");
      scanf("%d",&l);
      if(l==0)
      {
	con_dis();
      }
      break;
    default:
      con_dis();
  }
}
void con_edit()
{
  int i,ch,am;
  clrscr();
  printf("\t\t\t\tContacts Edit\n");
  printf("********************************************************************************");
  printf("\t\t     The time is ");
  tim();
  printf("Press 0 to return to main menu\nPress 1 to edit PAGE 1\nPress 2 to edit PAGE 2\nPress 3 to edit PAGE 3\nPress 4 to edit PAGE 4");
  scanf("%d",&ch);
  switch(ch)
  {
    case 0:
	clrscr();
	admin();
  break;
    case 1:
	printf("\nEnter The Number of contacts");
	scanf("%d",&am);
	for(i=0;i<am;i++)
	{
	   printf("Enter the name ");
	   scanf("%s",&C_name[i]);
	   printf("Enter the phone numbr ");
	   scanf("%s",&C_phone[i]);
	}
	break;
    case 2:
	printf("\nEnter The Number of contacts");
	scanf("%d",&am);
	for(i=5;i<5+am;i++)
	{
	   printf("Enter the name ");
	   scanf("%s",&C_name[i]);
	   printf("Enter the phone numbr ");
	   scanf("%s",&C_phone[i]);
	}
	break;
    case 3:
	printf("\nEnter The Number of contacts");
	scanf("%d",&am);
	for(i=10;i<10+am;i++)
	{
	   printf("Enter the name ");
	   scanf("%s",&C_name[i]);
	   printf("Enter the phone numbr ");
	   scanf("%s",&C_phone[i]);
	}
	break;
    case 4:
	printf("\nEnter The Number of contacts");
	scanf("%d",&am);
	for(i=15;i<15+am;i++)
	{
	   printf("Enter the name ");
	   scanf("%s",&C_name[i]);
	   printf("Enter the phone numbr ");
	   scanf("%s",&C_phone[i]);
	}
	break;
  default:
      con_edit();
  }
  con_dis();
}
//Medicine Function
void med_dis()
{
  int i,c,l;
  clrscr();
  printf("\t\t\t\tMedicine Display\n");
  printf("********************************************************************************");
  printf("\t\t     The time is ");
  tim();
  printf("Press 0 to return to main menu\nPress 1 to open Morning\nPress 2 to open Afternoon\nPress 3 to open Evening\nPress 4 to open Night");
  scanf("%d",&c);
  switch(c)
  {
    case 0:
      user();
      break;
    case 1:
      clrscr();
      printf("\t\t\t\tMorning\n");
      printf("Time  | ");
      for(i=0;i<5;i++)
      {
	printf("%s\t\t",M_time[i]);
      }
      printf("\nName  | ");
      for(i=0;i<5;i++)
      {
	printf("%s\t",M_name[i]);
      }
      printf("\nDosage| ");
      for(i=0;i<5;i++)
      {
	printf("%d\t\t",M_dosage[i]);
      }
      printf("\nType  | ");
      for(i=0;i<5;i++)
      {
	printf("%s\t\t",M_type[i]);
      }
      printf("\nPress 0 return to previous page");
      scanf("%d",&l);
      if(l==0)
      {
	med_dis();
      }
      break;
    case 2:
      clrscr();
      printf("\t\t\t\tAfternoon\n");
      printf("Time  | ");
      for(i=5;i<10;i++)
      {
	printf("%s\t\t",M_time[i]);
      }
      printf("\nName  | ");
      for(i=5;i<10;i++)
      {
	printf("%s\t",M_name[i]);
      }
      printf("\nDosage| ");
      for(i=5;i<10;i++)
      {
	printf("%d\t\t",M_dosage[i]);
      }
      printf("\nType  | ");
      for(i=5;i<10;i++)
      {
	printf("%s\t\t",M_type[i]);
      }
      printf("\nPress 0 return to previous page");
      scanf("%d",&l);
      if(l==0)
      {
	med_dis();
      }
      break;
    case 3:
      clrscr();
      printf("\t\t\t\tEvening\n");
      printf("Time  | ");
      for(i=10;i<15;i++)
      {
	printf("%s\t\t",M_time[i]);
      }
      printf("\nName  | ");
      for(i=10;i<15;i++)
      {
	printf("%s\t",M_name[i]);
      }
      printf("\nDosage| ");
      for(i=10;i<15;i++)
      {
	printf("%d\t\t",M_dosage[i]);
      }
      printf("\nType  | ");
      for(i=10;i<15;i++)
      {
	printf("%s\t\t",M_type[i]);
      }
      printf("\nPress 0 return to previous page");
      scanf("%d",&l);
      if(l==0)
      {
	med_dis();
      }
      break;
    case 4:
      clrscr();
      printf("\t\t\t\tNight\n");
      printf("Time  | ");
      for(i=15;i<20;i++)
      {
	printf("%s\t\t",M_time[i]);
      }
      printf("\nName  | ");
      for(i=15;i<20;i++)
      {
	printf("%s\t",M_name[i]);
      }
      printf("\nDosage| ");
      for(i=15;i<20;i++)
      {
	printf("%d\t\t",M_dosage[i]);
      }
      printf("\nType  | ");
      for(i=15;i<20;i++)
      {
	printf("%s\t\t",M_type[i]);
      }
      printf("\nPress 0 return to previous page");
      scanf("%d",&l);
      if(l==0)
      {
	med_dis();
      }
      break;
    default:
      med_dis();
  }
}
void med_edit()
{
  int i,ch,am;
  clrscr();
  printf("\t\t\t\tMedicine Edit\n");
  printf("********************************************************************************");
  printf("\t\t     The time is ");
  tim();
  printf("Press 0 to return to main menu\nPress 1 to edit Morning\nPress 2 to edit Afternoon\nPress 3 to edit Evening\nPress 4 to edit Night");
  scanf("%d",&ch);
  switch(ch)
  {
    case 0:
      admin();
      break;
    case 1:
	printf("\nEnter The Number of Medicines in the morning");
	scanf("%d",&am);
	for(i=0;i<am;i++)
	{
	   printf("Enter the Time");
	   scanf("%s",&M_time[i]);
	   printf("Enter the Name");
	   scanf("%s",&M_name[i]);
	   printf("Enter the Dosage");
	   scanf("%d",&M_dosage[i]);
	   printf("Enter the Type");
	   scanf("%s",&M_type[i]);
	}
	break;
    case 2:
	printf("\nEnter The Number of Medicines in the Afternoon");
	scanf("%d",&am);
	for(i=5;i<5+am;i++)
	{
	   printf("Enter the Time");
	   scanf("%s",&M_time[i]);
	   printf("Enter the Name");
	   scanf("%s",&M_name[i]);
	   printf("Enter the Dosage");
	   scanf("%d",&M_dosage[i]);
	   printf("Enter the Type");
	   scanf("%s",&M_type[i]);
	}
	break;
    case 3:
	printf("\nEnter The Number of Medicines at evening");
	scanf("%d",&am);
	for(i=10;i<10+am;i++)
	{
	   printf("Enter the Time");
	   scanf("%s",&M_time[i]);
	   printf("Enter the Name");
	   scanf("%s",&M_name[i]);
	   printf("Enter the Dosage");
	   scanf("%d",&M_dosage[i]);
	   printf("Enter the Type");
	   scanf("%s",&M_type[i]);
	}
	break;
    case 4:
	printf("\nEnter The Number of Medicines at night");
	scanf("%d",&am);
	for(i=15;i<15+am;i++)
	{
	   printf("Enter the Time");
	   scanf("%s",&M_time[i]);
	   printf("Enter the Name");
	   scanf("%s",&M_name[i]);
	   printf("Enter the Dosage");
	   scanf("%d",&M_dosage[i]);
	   printf("Enter the Type");
	   scanf("%s",&M_type[i]);
	}
	break;
    default:
      med_edit();
  }
  med_dis();
}
void faq()
{
  int p,c;
  clrscr();
  printf("\t\t\t\tFAQ\n");
  printf("********************************************************************************");
  printf("\t\t     The time is ");
  tim();
  printf("\n\t\t   Press 0 to return to main menu\n\t\t   Press 1 to see how to make a vedio call\n\t\t   Press 2 to see how to make a money transaction\n\t\t   Press 3 to book a cab\n");
  scanf("%d",&c);
  switch (c)
  {
    case 0:
      user();
      break;
    case 1:
      clrscr();
      printf("\t\t\tTo make a vedio call on WhatsApp");
      printf("\n******************************************************************************");
      printf("\n1.\tOpen the WhatsApp app on your device");
      printf("\n2.\tGo to the chat window of the person you want to make a vedio call with.  \tYou can do this by tapping on the chat in the chat list");
      printf("\n3.\tTap on the vedio camera icon in the top right corner of the chat window.  \tThis will initiate the vedio call");
      printf("\n4.\tWait for the person to answer the call. If they answer, the vedio call    \twill begin.");
      printf("\n  \tIf you want to end the call, tap on the red hang-up button. you can also  \tswitch between the front and back cameras by tapping the camera switch  \ticon, and you can turn off the vedio by tapping the video icon so that  \tonly the audio is on.");
      printf("\n\nNOTE:Both you and the person you are calling must have an internet connection \tfor the vedio call to work");
      printf("\n\nPress 0 to return to FAQ menu");
      scanf("%d",&p);
      if(p==0)
      {
	faq();
      }
      break;
    case 2:
      clrscr();
      printf("\t\t\tTo Pay bills on Google Pay");
      printf("\n******************************************************************************");
      printf("\n1.\tFirst, make sure you have the Google Pay app downloaded on your mobile  \tdevice. If you don't already have it, you can download it for free from   \tthe Google Play Store or the App Store.");
      printf("\n2.\tOpen the Google Pay app and sign in with your Google account.");
      printf("\n3.\tIn the main screen, you will see a '+' icon on the bottom right corner,   \ttap it");
      printf("\n4.\tNow in the next screen, you will see options, select 'Payments'");
      printf("\n5.\tIn the payments screen, you will see a 'Pay a bill' option, tap it.");
      printf("\n6.\tNext, you will be prompted to enter the details of the bill you want to   \tpay. This may include the name of the biller, the account number,and the   \tamount you want to pay. Make sure you double-check the details before     \tcontinuing.");
      printf("\n7.\tAfter you have entered the bill details, you will be asked to choose a    \tpayment method. Google Pay allows you to pay using a linked bank account  \t, debit card, or credit card. Choose the payment method you prefer.");
      printf("\n8.\tOnce you have selected your payment method, you will be prompted to       \tconfirm the transaction. Review the details carefully and tap 'Confirm'   \tto complete the payment.");
      printf("\n9.\tA notification will be sent to you with details of the payment and the    \tstatus of the transaction.");
      printf("\nNote: Some billers or merchants may not be available on Google Pay, also some bank account may not be eligible to pay via Google pay, also make sure you have sufficient balance or credit limit in the linked account.");
      printf("\n\nPress 0 to return to FAQ menu");
      scanf("%d",&p);
      if(p==0)
      {
	      faq();
      }
      break;
    case 3:
      clrscr();
      printf("\t\t\tTo Pay bills on Google Pay");
      printf("\n******************************************************************************");
      printf("\n1.\tDownload and open the Ola app on your mobile device.");
      printf("\n2.\tSign in to your account or create a new one.");
      printf("\n3.\tOn the home screen, tap on the 'Ride Now' button.");
      printf("\n4.\tSet your pickup and destination location on the map.");
      printf("\n5.\tSelect the cab type that you prefer.");
      printf("\n6.\tConfirm the ride, and set any additional preferences if needed.");
      printf("\n7.\tWait for your driver's information, and track him in real time.");
      printf("\n8.\tYour cab will arrive shortly, and you'll be on your way. Once arrived     \tshare the otp and the ride begins");
      printf("\n\nPress 0 to return to FAQ menu");
      scanf("%d",&p);
      if(p==0)
      {
	      faq();
      }
      break;
      default:
	faq();
  }
}