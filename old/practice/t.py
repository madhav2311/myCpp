import pyglet

window = pyglet.window.Window(400, 300, "Test Window")

@window.event
def on_draw():
    window.clear()

pyglet.app.run()
