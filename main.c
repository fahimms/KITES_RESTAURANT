#include<stdio.h>
#include<string.h>


//product price
int co = 60, b_co = 60, t = 40, f_f = 50, c_f = 120;
int f_r_p = 150, a_j = 100, m_j = 100, o_j = 100, w = 50;


int main()
{

    int t_e = 0;
res:
    t_e = 0;
    system("cls");


    system("Color 3F");

    // SHOP Name
    printf("       \n\n\n");
    printf("       =======================================\n");
    printf("       =======================================\n");
    printf("       ========                       ========\n");
    printf("       ========    KITES RESTAURANT   ========\n");
    printf("       ========                       ========\n");
    printf("       =======================================\n");
    printf("       =======================================");
    printf("       \n\n\n");



    // ADMIN PART
    char username[20], password[20];

User:


    //Username Part
    printf("       Username =>     ");
    gets(username);

    if(strcmp(username,"Sumit")==0)
    {



        //Password Part
        system ("cls");

        // SHOP Name
        printf("       \n\n\n");
        printf("       =======================================\n");
        printf("       =======================================\n");
        printf("       ========                       ========\n");
        printf("       ========    KITES RESTAURANT   ========\n");
        printf("       ========                       ========\n");
        printf("       =======================================\n");
        printf("       =======================================");
        printf("       \n\n\n");


Pass:
        printf("       Password =>     ");
        gets(password);

        if(strcmp(password,"pass")==0)
        {

            system ("cls");
menu:

            // SHOP Name
            printf("       \n\n\n");
            printf("       =======================================\n");
            printf("       =======================================\n");
            printf("       ========                       ========\n");
            printf("       ========    KITES RESTAURANT   ========\n");
            printf("       ========                       ========\n");
            printf("       =======================================\n");
            printf("       =======================================");
            printf("       \n\n\n");


            //Menu Option
            printf("\n\n       <><><><><><><><> MENU <><><><><><><><>    \n\n");


            //Menu's options
            printf("       1. Foods Item & Price.\n");
            printf("       2. Sell Option.\n");
            printf("       3. Total Earning.\n");
            printf("       4. Find Out Employer.\n");
            printf("       5. Employers Details\n");
            printf("       0. Exit?\n");



            //Choose Option
            char menu_key[2];

            printf("\n\n       Choose Your Option : ");
            gets(menu_key);



            //1. Foods Item & Price.
            if(strcmp(menu_key,"1")==0)
            {
food_p:
                system ("cls");

                // SHOP Name
                printf("       \n\n\n");
                printf("       =======================================\n");
                printf("       =======================================\n");
                printf("       ========                       ========\n");
                printf("       ========    KITES RESTAURANT   ========\n");
                printf("       ========                       ========\n");
                printf("       =======================================\n");
                printf("       =======================================");
                printf("       \n\n\n");


                printf("       [[[[[[[[[[[ Foods Item & Price ]]]]]]]]]   \n\n\n");



                printf("       No.            FOOD           PRICE\n\n");

                printf("       01.           Coffee          60 TK\n");
                printf("       02.        Black-Coffee       60 TK\n");
                printf("       03.            Tea            40 TK\n");
                printf("       04.         French Fry        50 TK\n");
                printf("       05.         Chicken Fry      120 TK\n");
                printf("       06.      Fried Rice Package  150 TK\n");
                printf("       07.         Apple Juice      100 TK\n");
                printf("       08.         Mango Juice      100 TK\n");
                printf("       09.         Orange Juice     100 TK\n");
                printf("       10.         Water Pot(2L)     50 TK\n");



                //Back on Menu
                char FP[2];
                printf("\n\n\n       Back!(0) : ");
                gets(FP);
                printf("\n");

                if(strcmp(FP,"0")==0)
                {
                    goto menu;
                }
                else if(strcmp(FP,"0")!=0)
                {
                    system ("cls");
                    // SHOP Name
                    printf("       \n\n\n");
                    printf("       =======================================\n");
                    printf("       =======================================\n");
                    printf("       ========                       ========\n");
                    printf("       ========    KITES RESTAURANT   ========\n");
                    printf("       ========                       ========\n");
                    printf("       =======================================\n");
                    printf("       =======================================");
                    printf("       \n\n\n");

                    printf("       Wrong Key!\n\n\n");
                    printf("       Please Enter Your Right Key :(\n");
                    goto food_p;
                }


            }




            //2. Sell Option
            else if(strcmp(menu_key,"2")==0)
            {
                system ("cls");

                // SHOP Name
                printf("       \n\n\n");
                printf("       =======================================\n");
                printf("       =======================================\n");
                printf("       ========                       ========\n");
                printf("       ========    KITES RESTAURANT   ========\n");
                printf("       ========                       ========\n");
                printf("       =======================================\n");
                printf("       =======================================");
                printf("       \n\n\n");


                printf("       [[[[[[[[[[[[[[ Selling  ]]]]]]]]]]]]]]]  \n\n\n");


                int n, s_t=0;
                int s1=0, s2=0, s3=0,s4=0, s5=0, s6=0, s7=0, s8=0, s9=0, s10=0;

                //Coffee
                printf("       Enter number of Coffee : ");
                n = 0;
                scanf("%d",&n);
                s1 = n * co;

                //Black-Coffee
                printf("       Enter number of Black-Coffee : ");
                n = 0;
                scanf("%d",&n);
                s2 = n * b_co;

                //Tea
                printf("       Enter number of Tea : ");
                n = 0;
                scanf("%d",&n);
                s3 = n * t;

                //French Fry
                printf("       Enter number of French Fry : ");
                n = 0;
                scanf("%d",&n);
                s4 = n * f_f;


                //Chicken Fry
                printf("       Enter number of Chicken Fry : ");
                n = 0;
                scanf("%d",&n);
                s5 = n * c_f;


                //Fried Rice Package
                printf("       Enter number of Fried Rice Package : ");
                n = 0;
                scanf("%d",&n);
                s6 = n * f_r_p;


                //Apple Juice
                printf("       Enter number of Apple Juice : ");
                n = 0;
                scanf("%d",&n);
                s7 = n * a_j;


                //Mango Juice
                printf("       Enter number of Mango Juice : ");
                n = 0;
                scanf("%d",&n);
                s8 = n * m_j;


                //Orange Juice
                printf("       Enter number of Orange Juice : ");
                n = 0;
                scanf("%d",&n);
                s9 = n * o_j;


                //Water Pot
                printf("       Enter number of Water Pot : ");
                n = 0;
                scanf("%d",&n);
                s10 = n * w;

                s_t = s1+s2+s3+s4+s5+s6+s7+s8+s9+s10;


                //Total
                printf("\n\n\n       Total    =      %dtk\n\n\n",s_t);


                //increment total earning in this day
                t_e = t_e + s_t;





                //Back on Menu
                int sell;
se:
                printf("\n       Back!(0) : ");
                scanf("%d",&sell);

                if(sell==0)
                {
                    goto menu;
                }
                else
                {
                    system ("cls");
                    // SHOP Name
                    printf("       \n\n\n");
                    printf("       =======================================\n");
                    printf("       =======================================\n");
                    printf("       ========                       ========\n");
                    printf("       ========    KITES RESTAURANT   ========\n");
                    printf("       ========                       ========\n");
                    printf("       =======================================\n");
                    printf("       =======================================");
                    printf("       \n\n\n");

                    printf("       Wrong Key!\n\n\n");
                    printf("       Please Enter Your Right Key :(\n");
                    goto se;
                }
            }







            //Total Earning
            else if(strcmp(menu_key,"3")==0)
            {
                system ("cls");
                // SHOP Name
                printf("       \n\n\n");
                printf("       =======================================\n");
                printf("       =======================================\n");
                printf("       ========                       ========\n");
                printf("       ========    KITES RESTAURANT   ========\n");
                printf("       ========                       ========\n");
                printf("       =======================================\n");
                printf("       =======================================");
                printf("       \n\n\n");

te:

                printf("       [[[[[[[[[[[[[ Total Earning ]]]]]]]]]]]   \n\n\n");


                printf("       Total Earning of this day    =     %dTK\n\n\n",t_e);




                //Back Menu
                char et[2];
                printf("       Back!(0) : ");
                gets(et);

                if(strcmp(et,"0")==0)
                {
                    goto menu;
                }

                else
                {
                    system ("cls");
                    printf("       \n\n\n");
                    printf("       =======================================\n");
                    printf("       =======================================\n");
                    printf("       ========                       ========\n");
                    printf("       ========    KITES RESTAURANT   ========\n");
                    printf("       ========                       ========\n");
                    printf("       =======================================\n");
                    printf("       =======================================");
                    printf("       \n\n\n");

                    printf("       Wrong Key!\n\n\n");
                    printf("       Please Enter Your Right Key :(\n");
                    goto te;
                }

            }






            //4. Find Out Employer
            else if(strcmp(menu_key,"4")==0)
            {
                system ("cls");
                // SHOP Name
                printf("       \n\n\n");
                printf("       =======================================\n");
                printf("       =======================================\n");
                printf("       ========                       ========\n");
                printf("       ========    KITES RESTAURANT   ========\n");
                printf("       ========                       ========\n");
                printf("       =======================================\n");
                printf("       =======================================");
                printf("       \n\n\n");


                printf("       [[[[[[[[[[[[ Search Employee ]]]]]]]]]]   \n\n\n");


                //finding employee
                char fempl[50];
                printf("       Enter Employee Name : ");
                gets(fempl);


                if(strcmp(fempl,"Rahim")==0)
                {
                    printf("\n\n       Rahim.\n");
                    printf("       Mirpur - 1, Dhaka.\n");
                    printf("       017XXXXXXXX\n\n");
                }

                else if(strcmp(fempl,"Karim")==0)
                {
                    printf("\n\n       Karim.\n");
                    printf("       Kazipara, Mirpur, Dhaka.\n");
                    printf("       017XXXXXXXX\n\n");
                }

                else if(strcmp(fempl,"Safik")==0)
                {
                    printf("\n\n       Safik.\n");
                    printf("       Narayangonj.\n");
                    printf("       017XXXXXXXX\n\n");
                }

                else if(strcmp(fempl,"Siddik")==0)
                {
                    printf("\n\n       Siddik.\n");
                    printf("       Pubna.\n");
                    printf("       017XXXXXXXX\n\n");
                }

                else if(strcmp(fempl,"Polash")==0)
                {
                    printf("\n\n       Polash.\n");
                    printf("       Kollanpur, Dhaka.\n");
                    printf("       017XXXXXXXX\n\n");
                }

                else
                {
                    printf("       Not Found!\n\n\n");
                }




                //Back Menu
                char fem[2];
findemployee:
                printf("       Back!(0) : ");
                gets(fem);

                if(strcmp(fem,"0")==0)
                {
                    goto menu;
                }

                else
                {
                    system ("cls");
                    printf("       \n\n\n");
                    printf("       =======================================\n");
                    printf("       =======================================\n");
                    printf("       ========                       ========\n");
                    printf("       ========    KITES RESTAURANT   ========\n");
                    printf("       ========                       ========\n");
                    printf("       =======================================\n");
                    printf("       =======================================");
                    printf("       \n\n\n");

                    printf("       Wrong Key!\n\n\n");
                    printf("       Please Enter Your Right Key :(\n");
                    goto findemployee;
                }



            }






            //5. Employers Details


            else if(strcmp(menu_key,"5")==0)
            {

                system ("cls");
                printf("       \n\n\n");
                printf("       =======================================\n");
                printf("       =======================================\n");
                printf("       ========                       ========\n");
                printf("       ========    KITES RESTAURANT   ========\n");
                printf("       ========                       ========\n");
                printf("       =======================================\n");
                printf("       =======================================");
                printf("       \n\n\n");

                printf("       [[[[[[[[[ All Employers Details ]]]]]]]]\n\n\n");



                printf("\n\n       Rahim.\n");
                printf("       Mirpur - 1, Dhaka.\n");
                printf("       017XXXXXXXX\n\n");
                printf("       =====================\n\n");


                printf("\n\n       Karim.\n");
                printf("       Kazipara, Mirpur, Dhaka.\n");
                printf("       017XXXXXXXX\n\n");
                printf("       =====================\n\n");


                printf("\n\n       Safik.\n");
                printf("       Narayangonj.\n");
                printf("       017XXXXXXXX\n\n");
                printf("       =====================\n\n");


                printf("\n\n       Siddik.\n");
                printf("       Pubna.\n");
                printf("       017XXXXXXXX\n\n");
                printf("       =====================\n\n");


                printf("\n\n       Polash.\n");
                printf("       Kollanpur, Dhaka.\n");
                printf("       017XXXXXXXX\n\n");
                printf("       =====================\n\n");





                //Back Menu
                char ed[2];
empD:
                printf("\n       Back!(0) : ");
                gets(ed);

                if(strcmp(ed,"0")==0)
                {
                    goto menu;
                }

                else
                {
                    system ("cls");
                    printf("       \n\n\n");
                    printf("       =======================================\n");
                    printf("       =======================================\n");
                    printf("       ========                       ========\n");
                    printf("       ========    KITES RESTAURANT   ========\n");
                    printf("       ========                       ========\n");
                    printf("       =======================================\n");
                    printf("       =======================================");
                    printf("       \n\n\n");

                    printf("       Wrong Key!\n\n\n");
                    printf("       Please Enter Your Right Key :(\n");
                    goto empD;
                }


            }





            //0. Exit?
            else if(strcmp(menu_key,"0")==0)
            {
                goto exit;
            }








            else
            {
                system ("cls");


                printf("\n       Wrong Key!\n");
                printf("       Please Enter Your Right Key :(\n");
                goto menu;
            }



        }

        else
        {
            system ("cls");

            // SHOP Name
            printf("       \n\n\n");
            printf("       =======================================\n");
            printf("       =======================================\n");
            printf("       ========                       ========\n");
            printf("       ========    KITES RESTAURANT   ========\n");
            printf("       ========                       ========\n");
            printf("       =======================================\n");
            printf("       =======================================");
            printf("       \n\n\n");


            printf("       Wrong Password!\n\n\n");
            printf("       Please Enter Your Right Password :(\n");
            goto Pass;
        }


    }

    else
    {
        system ("cls");

        // SHOP Name
        printf("       \n\n\n");
        printf("       =======================================\n");
        printf("       =======================================\n");
        printf("       ========                       ========\n");
        printf("       ========    KITES RESTAURANT   ========\n");
        printf("       ========                       ========\n");
        printf("       =======================================\n");
        printf("       =======================================");
        printf("       \n\n\n");


        printf("       Wrong Username!\n\n\n");
        printf("       Please Enter Your Right Username :(\n");
        goto User;
    }


    //Exit Part
    char ex[2];
ag:
exit:
    printf("\n\n\n       Are You Sure?(Y/N) :   ");
    gets(ex);

    if(strcmp(ex,"N")==0)
    {
        goto menu;
    }
    else if(strcmp(ex,"Y")==0)
    {
        goto end;
    }
    else
    {
        system("cls");
        printf("       Wrong Key!\n\n\n");
        printf("       Please Enter Your Right Key :(\n");
        goto ag;
    }

end:
    return 0;
}
