 
    regular_hours = min(hours_worked, 40)
    overtime_hours = max(hours_worked - 40, 0)
    
   
    gross_pay = (regular_hours * hourly_wage) + (overtime_hours * hourly_wage * 1.5)
    
   
    if gross_pay <= 600:
        taxes = gross_pay * 0.15
    else:
        taxes = (600 * 0.15) + ((gross_pay - 600) * 0.2)
    

    net_pay = gross_pay - taxes
    
    return gross_pay, taxes, net_pay


hours_worked = float(input("Enter hours worked in a week: "))
hourly_wage = float(input("Enter hourly wage: "))


gross_pay, taxes, net_pay = calculate_pay(hours_worked, hourly_wage)
print(f"Gross Pay: ${gross_pay:.2f}")
print(f"Taxes: ${taxes:.2f}")
pri
