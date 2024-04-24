# In the name of GOD
# Created by: Faraz Golshahi
# Email: Faraz.golshahi8151@gmail.com
# Github: https://github.com/FarazGolshahii
# Question link: https://quera.org/problemset/190990/

from .models import *
from django.db.models import Avg, Sum
from datetime import datetime, timedelta


def young_employees(job: str):
    emps = Employee.objects.filter(age__lt=30).filter(job=job)
    return emps


def cheap_products():
    """
    Returns a list of product names that are cheap.
    Parameters:
    -----------
    None
    Returns:
    --------
    names (list): A list of product names that are cheap.
    """
    av = Product.objects.aggregate(Avg("price", default=0))
    products = Product.objects.filter(price__lt=av["price__avg"]).order_by("price")
    names = []
    for i in products:
        names.append(i.name)
    return names


def products_sold_by_companies():
    out = []
    comps = Company.objects.all()
    for i in comps:
        prods = Product.objects.filter(company=i.id).aggregate(Sum("sold"))["sold__sum"]
        out.append((i.name, prods))
    return out


def sum_of_income(start_date: str, end_date: str):
    """
    returns and integer number of all income
    """
    sumation = 0
    ords = Order.objects.filter(time__range=(start_date, end_date))
    for i in ords:
        sumation += i.price
    return sumation


def good_customers():
    out = []
    now = datetime.now().date()
    cust = Customer.objects.all()
    for i in cust:
        ords_count = Order.objects.filter(customer=i.id).filter(time__range=(now - timedelta(days=30), now)).count()
        if ords_count > 10:
            out.append((i.name, i.phone))

    return out


def nonprofitable_companies():
    comps = Company.objects.all()
    out = []
    for i in comps:
        products = Product.objects.filter(company=i.id)
        is_lt100 = []
        for j in products:
            ords = Order.objects.filter(product=j.id).count()
            if ords <= 100:
                is_lt100.append('yes')
        if len(is_lt100) >= 4:
            out.append(i.name)
    return out