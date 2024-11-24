#include <stdio.h>
#include <string.h>
#define maxcustomer 100

struct customerdetail
{
    int accnum;
    char name[50];
    float balance;
};

void addCustomer(struct customerdetail customer[], int *numcustomer);
void deposit(struct customerdetail customer[], int numcustomer);
void withdraw(struct customerdetail customer[], int numcustomer);
void displayCustomers(struct customerdetail customer[], int numcustomer);


int main()
{
	struct customerdetail customer[maxcustomer];
    int numcustomer=0;
    int choice=0;
    
	while (1) 
	{
        printf("\nBank Management System\n");
        printf("1. Add New Customer\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Display All Customers\n");
        printf("5. Exit\n");
        
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) 
		{
            case 1:
                addCustomer(customer, &numcustomer);
                break;
            case 2:
                deposit(customer, numcustomer);
                break;
            case 3:
                withdraw(customer, numcustomer);
                break;
            case 4:
                displayCustomers(customer, numcustomer);
                break;
            case 5:
                printf("Exiting program.\n");
                return 0;
        }
    }

	return 0;
}


void addCustomer(struct customerdetail customer[], int *numcustomer) 
{
    struct customerdetail newcustomer;
    printf("Enter account number: ");
    scanf("%d", &newcustomer.accnum);
    printf("Enter customer name: ");
    scanf(" %[^\n]", newcustomer.name);
    printf("Enter initial balance: ");
    scanf("%f", &newcustomer.balance);

    customer[*numcustomer]=newcustomer;
    (*numcustomer)++;
    printf("Customer added successfully.\n");
}


void deposit(struct customerdetail customer[], int numcustomer) 
{
    int accnum,i;
    float amount;
    printf("Enter account number for deposit: ");
    scanf("%d", &accnum);
    printf("Enter amount to deposit: ");
    scanf("%f", &amount);

    for (i=0;i<numcustomer;i++) 
	{
        if (customer[i].accnum==accnum) 
		{
            customer[i].balance += amount;
            printf("Deposit successful. New balance: %.2f\n", customer[i].balance);
            return;
        }
    }
    printf("Invalid Account Number. Please Try Again\n");
}


void withdraw(struct customerdetail customer[], int numcustomer) 
{
    int accnum,i;
    float amount;
    printf("Enter account number for withdrawal: ");
    scanf("%d", &accnum);
    printf("Enter amount to withdraw: ");
    scanf("%f", &amount);

    for (i=0;i<numcustomer;i++) 
	{
        if (customer[i].accnum==accnum) 
		{
            if (customer[i].balance>=amount) 
			{
                customer[i].balance=customer[i].balance-amount;
                printf("Withdrawal successful. New balance: %.2f\n", customer[i].balance);
                return;
            } 
			else 
                printf("Insufficient balance.\n");
            	return;
        }
    }
}


void displayCustomers(struct customerdetail customer[], int numcustomer) 
{
	int i;
    if (numcustomer==0) 
	{
        printf("None of the customer to display.\n");
    } 
	else 
	{
        printf("\nCustomer List:\n");
 		for (i=0;i<numcustomer;i++) 
        printf("Account Number: %d, Name: %s, Balance: %.2f\n", customer[i].accnum, customer[i].name, customer[i].balance);
    }
}
