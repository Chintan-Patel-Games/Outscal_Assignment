using System;

namespace Midnight_Pizza_Fight
{
    public class Player
    {
        //variables
        private int health = 100;
        private int maxHealth = 100;
        private int attackDamage = 20;
        private int healingCapacity = 15;

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
        public Player()
        {
            SpawnPlayer();
            DisplayPlayerStats();
        }

        //Function
        private void SpawnPlayer()
        {
            Console.WriteLine("\n\n==================================================");
            Console.WriteLine(" 🍕 DOUGH MASTER: GUARDIAN OF THE GOLDEN CRUST 🍕");
            Console.WriteLine("==================================================\n");
            Console.WriteLine("\nDough Master: That scoundrel won't escape with my creation!");
        }

        public void DisplayPlayerStats()
        {
            Console.WriteLine("\n---------------------------------------------------");
            Console.WriteLine("              DOUGH MASTER'S STATS                ");
            Console.WriteLine("---------------------------------------------------");
            Console.WriteLine("Health: " + Health + "/" + maxHealth);
            Console.WriteLine("Dough Slapper: " + attackDamage);
            Console.WriteLine("Espresso Shot ☕: " + healingCapacity);
            Console.WriteLine("Dough Slapper Boost 🌪️: 5 to 15");
            Console.WriteLine("Espresso Shot Boost ☕: 10 to 20");
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
            Console.WriteLine("Dough Master's attack dealt " + totalDamage + " damage! 🥊");
            Console.WriteLine("--------------------------------------------");
        }

        public void Heal(int healAmount) => Health += healAmount;

        public int CalculateTotalHeal()
        {
            int additionalHeal = GenerateRandomNumberInRange(10, 20);
            int totalHeal = healingCapacity + additionalHeal;

            return totalHeal;
        }

        public void ShowHeal(int healAmount)
        {
            if (Health >= maxHealth)
            {
                Console.WriteLine("             🍕 PIZZA BATTLE 🍕                   ");
                Console.WriteLine("============================================");
                Console.WriteLine("     Dough Master is bursting with energy! 🚀    ");
                Console.WriteLine("--------------------------------------------");
            }
            else
            {
                Console.WriteLine("             🍕 PIZZA BATTLE 🍕                   ");
                Console.WriteLine("============================================");
                Console.WriteLine("Dough Master's heal restored " + healAmount + " hp! ☕");
                Console.WriteLine("--------------------------------------------");
            }
        }
    }
}