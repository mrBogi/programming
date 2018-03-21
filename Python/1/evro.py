usd = 57
euro = 60
GBP = 70

money = int(input("Введите сумму, которую вы хотите обменять: "))
currency = int(input("Укажите код валюты (доллары - 400, евро - 401, фунт - 402): "))

if currency == 400:
    cache = round(money / usd, 2)
    print("Валюта: доллары США")
elif currency == 401:
    cache = round(money / euro, 2)
    print("Валюта: евро")
elif currency == 402:
    cache = round(money / GBP, 2)
    print("Валюта: фунт")
else:
    cache = 0
    print("Неизвестная валюта")

print("К получению:", cache)