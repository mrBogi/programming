import account
import evro


def main():
    rate = int(input("Введите процентную ставку: "))
    currency = int(input("Укажите код валюты (доллары - 400, евро - 401, фунт - 402): "))
    money = int(input("Введите сумму в рублях: "))
    period = int(input("Введите период ведения счета в месяцах: "))
    money = evro.valuta(money,currency)
    result = account.calculate_income(rate, money, period)
    print("Параметры счета:\n", "Сумма: ", money, "\n", "Ставка: ", rate, "\n", "Период: ", period, "\n",
          "Сумма на счете в конце периода: ", result)


if __name__ == "__main__":
    main()
