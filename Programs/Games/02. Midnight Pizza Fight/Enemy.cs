using System;

namespace Midnight_Pizza_Fight
{
    public class Enemy
    {
        //variables
        private int health = 150;
        private int maxHealth = 150;
        private int attackDamage = 15;

        public int Health
        {
            //GETTER
            get { return health; }
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
            DisplayEnemyStats();
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

        public void DisplayEnemyStats()
        {
            Console.WriteLine("\n---------------------------------------------------");
            Console.WriteLine("              CRUST BANDIT'S STATS                ");
            Console.WriteLine("---------------------------------------------------");
            Console.WriteLine("Health: " + Health + "/" + maxHealth);
            Console.WriteLine("Crust Bandit: " + attackDamage);
            Console.WriteLine("Crust Bandit Boost 🌪️: 5 to 15");
        }

        private int GenerateRandomNumberInRange(int min, int max)
        {
            Random rand = new Random();
            int randomNumber = rand.Next(min, max + 1);
            return randomNumber;
        }

        public void TakeDamage(int damageRecieved) => Health -= damageRecieved;

        public int CalculateTotalDamage()
        {
            int additionalDamage = GenerateRandomNumberInRange(5, 15);
            int totalDamage = attackDamage + additionalDamage;
            return totalDamage;
        }

        public void ShowAttackDamage(int totalDamage)
        {
            Console.WriteLine("             🍕 PIZZA BATTLE 🍕                   ");
            Console.WriteLine("============================================");
            Console.WriteLine("Crust Bandit's attack dealt " + totalDamage + " damage! 🥊");
            Console.WriteLine("--------------------------------------------");
        }
    }
}