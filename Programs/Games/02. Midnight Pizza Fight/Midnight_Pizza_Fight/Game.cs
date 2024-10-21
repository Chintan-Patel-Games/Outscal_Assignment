using System;

namespace Midnight_Pizza_Fight
{
    public class Game
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
}