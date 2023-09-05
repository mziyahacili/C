
using System.Runtime.CompilerServices;using System.Threading.Channels;

#region Part1

/*Cube cube = new();

cube.cubeForm(5,'#');

class Cube
{
    public void cubeForm(int length, char symbol)
    {
        for (int i = 0; i < length; i++)
        {
            for (int j = 0; j < length; j++)
            {
                Console.Write(symbol);
            }
            Console.WriteLine();
        }
        
    }
}*/

#endregion

#region Part2

/*
Palindrom palindrom = new();
int number = Int32.Parse(Console.ReadLine());

palindrom.Checking(number);

class Palindrom
{
    public void Checking(int numForChecking)
    {
        int length = 0;
        int examNum = numForChecking;
        int examNum2 = numForChecking;

        while (examNum != 0)
        {
            examNum /= 10;
            length++;
        }
        int[] reverseNum = new int[length];
        int[] num = new int[length];

        for (int i = 0; i < length; i++)
        {
            reverseNum[i] = examNum2 % 10;
            examNum2 /= 10;
        }

        int j = 0;
        for (int i = length-1; i >= 0; i--)
        {
            num[j] = reverseNum[i];
            j++;
        }

        for (int i = 0; i < length; i++)
        {
            if (num[i] == reverseNum[i])
                Console.WriteLine("Palindrome");
            else
                Console.WriteLine("Not palindrome");
        }

    }
}
*/

#endregion

#region Part4


//Variant 1
/*
string name = "";
string link = "";
string description = ""; 
string ip = "";

WebSite webSite = new WebSite(name,link,description,ip);
webSite.NameSet(name);
webSite.DescrSet(description);
webSite.LinkSet(link);
webSite.IpSet(ip);

webSite.Info();

Console.WriteLine(webSite.IpGet());
class WebSite
{

    public string name;
    public string description;
    private string ip;
    public string link;

    
    
    public WebSite(string name, string link, string description, string ip)
    {
        this.name = name;
        this.description = description;
        this.ip = ip;
        this.link = link;
    } 

    public void NameSet(string nameSite)
    {
        Console.Write("Enter site name: ");
        nameSite = Console.ReadLine();
        name = nameSite;
    }
    
    public void DescrSet(string descrSite)
    {
        Console.Write("Enter site description: ");
        descrSite = Console.ReadLine();
        description = descrSite;
    }
    
    public void LinkSet(string linkSite)
    {
        Console.Write("Enter site link: ");
        linkSite = Console.ReadLine();
        link = linkSite;
    }
    
    public void IpSet(string ipSite)
    {
        Console.Write("Enter site ip address: ");
        ipSite = Console.ReadLine();
        ip = ipSite;
    }

    public void Info()
    {
        Console.WriteLine($"Site name: {name}");
        Console.WriteLine($"Site description: {description}");
        Console.WriteLine($"Site link: {link}");
        Console.WriteLine($"Site ip address: {IpGet()}");
    }
    public string IpGet()
    {
        return ip;
    }
    
    
   
    
}
*/



#endregion

#region Part5

/*
string name = "";
int year = 0;
string number= "";
string email= "";
Journal journal = new Journal(name,year,number,email);
journal.NameSet(name);
journal.YearSet(year);
journal.NumberSet(number);
journal.EmailSet(email);

journal.Info();



class Journal
{
    private string name;
    private int createYear;
    private string number;
    private string email;

    public Journal(string name, int createYear, string number, string email)
    {
        this.name = name;
        this.createYear = createYear;
        this.number = number;
        this.email = email;
    }

    public void NameSet(string nameJournal)
    {
        Console.Write("Enter journal name: ");
        nameJournal = Console.ReadLine();
        name = nameJournal;
    }

    public void YearSet(int year)
    {
        Console.Write("Enter journal create year: ");
        year = int.Parse(Console.ReadLine());
        createYear = year;
    }

    public void NumberSet(string numberTel)
    {
        Console.Write("Enter your number: ");
        numberTel = Console.ReadLine();
        number = numberTel;
    }

    public void EmailSet(string personEmail)
    {
        Console.Write("Enter your email: ");
        personEmail = Console.ReadLine();
        email = personEmail;
    }

    public void Info()
    {
        Console.WriteLine($"Journal name: {name}");
        Console.WriteLine($"Journal year: {createYear}");
        Console.WriteLine($"Personal number: {number}");
        Console.WriteLine($"Email: {email}");
    }

    public string NameGet()
    {
        return name;
    }

    public int YearGet()
    {
        return createYear;
    }

    public string NumberGet()
    {
        return number;
    }

    public string EmailGet()
    {
        return email;
    }
 
}*/

#endregion

#region Part6

/*string name = "";
string address = "";
string description = "";
string number = "";
string email = "";

Magazine magazine = new Magazine(name, address, description, number, email);
magazine.NameSet(name);
magazine.AddressSet(address);
magazine.NumberSet(number);
magazine.DescriptionSet(description);
magazine.EmailSet(email);

magazine.Info();

class Magazine
{
    private string name;
    private string address;
    private string description;
    private string number;
    private string email;

    public Magazine(string name, string address, string description, string number, string email)
    {
        this.name = name;
        this.address = address;
        this.description = description;
        this.number = number;
        this.email = email;
    }
    
    public void NameSet(string nameMagazine)
    {
        Console.Write("Enter magazine name: ");
        nameMagazine = Console.ReadLine();
        name = nameMagazine;
    }
    public void NumberSet(string numberTel)
    {
        Console.Write("Enter your contact number: ");
        numberTel = Console.ReadLine();
        number = numberTel;
    }
    
    public void EmailSet(string personEmail)
    {
        Console.Write("Enter your email: ");
        personEmail = Console.ReadLine();
        email = personEmail;
    }
    
    public void AddressSet(string addressMagazine)
    {
        Console.Write("Enter your adress(magazine): ");
        addressMagazine = Console.ReadLine();
        address = addressMagazine;
    }
    
    public void DescriptionSet(string descriptionMagazine)
    {
        Console.Write("Enter magazine description: ");
        descriptionMagazine = Console.ReadLine();
        description = descriptionMagazine;
    }
    public void Info()
    {
        Console.WriteLine($"Magazine name: {name}");
        Console.WriteLine($"Magazine address: {address}");
        Console.WriteLine($"Magazine description: {description}");
        Console.WriteLine($"Magazine number: {number}");
        Console.WriteLine($"Email: {email}");
    }

    public string NameGet()
    {
        return name;
    }

    public string NumberGet()
    {
        return number;
    }
    
    public string AddressGet()
    {
        return address;
    }

    public string EmailGet()
    {
        return email;
    }

    public string DescrGet()
    {
        return description;
    }
}
*/


#endregion