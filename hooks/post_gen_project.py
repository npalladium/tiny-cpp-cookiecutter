import os
def cleanup():
{%- if cookiecutter.license == "No License" or cookiecutter.remove_license_file == "yes" %}
    os.unlink('LICENSE')
{% endif %}
    return
cleanup()
