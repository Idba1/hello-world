class Watch:
    def __init__(self, brand, model):
        # print("Watch")
        self.brand = brand
        self.model = model

    def display_time(self):
        print('displaying time......')


class FitnessTracker:
    def __init__(self, price):
        # print('Fitness tracker')
        self.price = price

    def track_step(self):
        print('Tracking step')

    def track_calories(self):
        print(' Tacking Calories')


class SmartWatch(Watch, FitnessTracker):
    def __init__(self, brand, model, price):
        Watch.__init__(self, brand, model)
        FitnessTracker.__init__(self, price)


apple_watch = SmartWatch('Apple', 'ultra', 12000)
print(apple_watch.brand, apple_watch.model, apple_watch.price)