def convert_txt_to_format(input_file, output_file):
    with open(input_file, 'r') as file:
        lines = file.readlines()

    with open(output_file, 'w') as file:
        for line in lines:
            formatted_line = "{" + ",".join(line.strip()) + "},"
            file.write(f'{formatted_line}\n')


# Menggunakan fungsi tersebut
input_file = 'input.txt'  # Ganti dengan nama file input Anda
output_file = 'output.txt'  # Nama file output yang diinginkan

convert_txt_to_format(input_file, output_file)
