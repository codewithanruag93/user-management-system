#include <stdio.h>
#include<string.h>

#define MAX_USERS 10
#define CREDENTIALS_LENGTH 30

typedef struct
{
    char username[CREDENTIALS_LENGTH];
    char password[CREDENTIALS_LENGTH];
} user;

user users[MAX_USERS];
int user_count = 0;

void fix_fget(char* );
void register_user();
int login_user();
void input_password(char*);

int main()
{
    int option;
    int user_index;
    while (1)
    {
        printf("\nwelcome to the user management system");
        printf("\n1. Registration");
        printf("\n2. Login");
        printf("\n3. Exit");
        printf("\nEnter the option: ");
        scanf("%d", &option);
        getchar();//consume extra enter
        switch (option)
        {
        case 1:
        register_user();
            break;
        case 2:
             user_index = login_user();
        if (user_index>=0)
        {
            printf("login successful. Welcome %s",users);
        }
        else{
            printf("\n Login failed , incorrect username or password !");
        }
        
            break;
        case 3:
            return 0;
            break;

        default:
            printf("\nInvalid option, please try again !");
            break;
        }
    }
    return 0;
}
void register_user()
{
    if(user_count==MAX_USERS){
        printf("\n maximum %d users are supported , No more users allowed !!!\n",MAX_USERS);
        return;
    }
        int new_index = user_count;
        printf("\nRegister a new user :---");
        printf("\nEnter the username :");
        fgets(users[new_index].username,CREDENTIALS_LENGTH, stdin);
        fix_fget(users[new_index].username);
        input_password(users[new_index].password);
        user_count++;
        printf("\nUser registered successfully !!!\n");
    
    
}

int login_user()
{
    char username[CREDENTIALS_LENGTH];
    char password[CREDENTIALS_LENGTH];

    printf("\n Enter the username :");
    fgets(username, CREDENTIALS_LENGTH, stdin);
    fix_fget(username);
    input_password(password);
    for (int i = 0; i <= user_count; i++)
    {
        if (strcmp(username, users[i].username) == 0 &&strcmp(password, users[i].password)==0)
        {
            return i;
        }
    }
    return -1;        
}
void input_password(char* password){
    printf("\nEnter a password : ");
    fgets(password, CREDENTIALS_LENGTH, stdin);
    fix_fget(password);
}
void fix_fget(char* string){
    int index = strcspn(string,"\n");
    string[index]= '\0';
}

