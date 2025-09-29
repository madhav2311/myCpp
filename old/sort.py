import pyglet
import random
import time

WINDOW_W = 800
WINDOW_H = 500
NUM_BARS = 50

class SortVisualizer(pyglet.window.Window):
    def __init__(self):
        super().__init__(WINDOW_W, WINDOW_H, "Sorting Visualizer")
        pyglet.gl.glClearColor(0.06, 0.06, 0.06, 1.0)
        self.reset()
        self.paused = True
        self.speed = 0.05
        self.last_step_time = time.time()
        self.highlight = (-1, -1)

    def reset(self):
        self.values = [random.randint(10, WINDOW_H - 20) for _ in range(NUM_BARS)]
        self.bar_w = WINDOW_W / NUM_BARS
        self.generator = self.bubble_sort(self.values)
        self.highlight = (-1, -1)

    def on_draw(self):
        self.clear()
        for i, v in enumerate(self.values):
            x = i * self.bar_w
            if i in self.highlight:
                color = [1.0, 0.4, 0.3] * 4  # red-ish for highlight
            else:
                color = [0.3, 0.8, 0.9] * 4  # blue-ish for normal bars

            pyglet.graphics.draw(
                4,
                pyglet.gl.GL_QUADS,
                ("v2f", (x, 0,
                         x + self.bar_w - 1, 0,
                         x + self.bar_w - 1, v,
                         x, v)),
                ("c3f", color),
            )

    def update(self, dt):
        if self.paused:
            return
        now = time.time()
        if (now - self.last_step_time) >= self.speed:
            try:
                i, j = next(self.generator)
                self.highlight = (i, j)
                self.last_step_time = now
            except StopIteration:
                self.highlight = (-1, -1)
                self.paused = True

    def on_key_press(self, symbol, modifiers):
        if symbol == pyglet.window.key.SPACE:
            self.paused = not self.paused
        elif symbol == pyglet.window.key.R:
            self.reset()

    def bubble_sort(self, arr):
        n = len(arr)
        for i in range(n):
            for j in range(0, n - i - 1):
                yield j, j+1
                if arr[j] > arr[j+1]:
                    arr[j], arr[j+1] = arr[j+1], arr[j]

if __name__ == "__main__":
    window = SortVisualizer()
    pyglet.clock.schedule_interval(window.update, 1/60.0)
    pyglet.app.run()
                                         