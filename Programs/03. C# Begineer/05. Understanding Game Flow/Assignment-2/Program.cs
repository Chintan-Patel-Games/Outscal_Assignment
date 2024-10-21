using System;

class Program
{

    // Assignment : Spawn Characters

    static void Main(string[] args)
    {
        Game game = new Game();
        game.DisplayGameStory();
        game.SpawnCharacters();
    }
}

class Game
{
    Player player;
    Enemy enemy;
    public void SpawnCharacters()
    {
        //Initialize Player and Enemy object 
        player = new Player();
        enemy = new Enemy();
    }

    public void DisplayGameStory()
    {
        Console.Clear();
        Console.WriteLine("\n==================================================");
        Console.WriteLine("            🍕 MIDNIGHT PIZZA FIGHT 🍕           ");
        Console.WriteLine("==================================================");
        Console.WriteLine("\nIn a bustling pizzeria on a busy Friday night...");
        Console.WriteLine("--------------------------------------------------");
        Console.WriteLine("You, the Dough Master, created your magnum opus -");
        Console.WriteLine("the perfect pizza🤌  Suddenly, a sneaky Crust Bandit");
        Console.WriteLine("snatches your masterpiece!");
        Console.WriteLine("--------------------------------------------------");
        Console.WriteLine("\nFueled by passion for your craft, you give chase...");
        Console.WriteLine("--------------------------------------------------");
        Console.WriteLine("Through winding alleys and crowded streets, you");
        Console.WriteLine("pursue the pizza pilferer. Finally, the thief is");
        Console.WriteLine("cornered in a dead-end alley. It's time to recover");
        Console.WriteLine("your stolen slice!");
        Console.WriteLine("--------------------------------------------------");
        Console.WriteLine("                      FIGHT!");
    }
}

class Player
{
    //variables
    private int health = 100;
    private int maxHealth = 100;
    private int attackDamage = 20;
    private int healingCapacity = 15;

    public int Health
    {
        //GETTER
        get
        {
            return health;
        }
        //SETTER
        private set
        {
            // If the value provided is negative, store zero instead
            if (value < 0)
                health = 0;
            // if the value exceeds maximum health
            else if (value > maxHealth)
            {
                health = maxHealth;
            }
            //set the provided value if both the conditions are false
            else
            {
                health = value;
            }
        }
    }

    //Default Constructor
    public Player()
    {
        SpawnPlayer();
    }

    //Function
    private void SpawnPlayer()
    {
        Console.WriteLine("\n\n==================================================");
        Console.WriteLine(" 🍕 DOUGH MASTER: GUARDIAN OF THE GOLDEN CRUST 🍕");
        Console.WriteLine("==================================================\n");
        Console.WriteLine("\nDough Master: That scoundrel won't escape with my creation!");
    }
}

class Enemy
{
    //variables
    private int health = 150;
    private int maxHealth = 150;
    private int attackDamage = 15;

    public int Health
    {
        //GETTER
        get
        {
            return health;
        }
        //SETTER
        private set
        {
            // If the value provided is negative, store zero instead
            if (value < 0)
                health = 0;
            // if the value exceeds maximum health
            else if (value > maxHealth)
            {
                health = maxHealth;
            }
            //set the provided value if both the conditions are false
            else
            {
                health = value;
            }
        }
    }

    //Default Constructor
    public Enemy()
    {
        SpawnEnemy();
    }

    //Function
    private void SpawnEnemy()
    {
        Console.WriteLine("\n\n==================================================");
        Console.WriteLine(" 🦹 CRUST BANDIT: NEMESIS OF ITALIAN CUISINE 🦹");
        Console.WriteLine("==================================================\n");
        Console.WriteLine("\nCrust Bandit: This delectable pizza is mine now!");
        Console.WriteLine("You'll never catch me, flour face!");
    }
}