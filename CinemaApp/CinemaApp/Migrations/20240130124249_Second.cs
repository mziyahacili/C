using Microsoft.EntityFrameworkCore.Migrations;

#nullable disable

namespace CinemaApp.Migrations
{
    /// <inheritdoc />
    public partial class Second : Migration
    {
        /// <inheritdoc />
        protected override void Up(MigrationBuilder migrationBuilder)
        {
            migrationBuilder.AlterColumn<string>(
                name: "Title",
                table: "Movies",
                type: "nvarchar(30)",
                maxLength: 30,
                nullable: false,
                oldClrType: typeof(string),
                oldType: "nvarchar(max)");

            migrationBuilder.AddColumn<int>(
                name: "MovieResultWrapperId",
                table: "Movies",
                type: "int",
                nullable: true);

            migrationBuilder.CreateTable(
                name: "MovieResultWrappers",
                columns: table => new
                {
                    Id = table.Column<int>(type: "int", nullable: false)
                        .Annotation("SqlServer:Identity", "1, 1")
                },
                constraints: table =>
                {
                    table.PrimaryKey("PK_MovieResultWrappers", x => x.Id);
                });

            migrationBuilder.CreateIndex(
                name: "IX_Movies_MovieResultWrapperId",
                table: "Movies",
                column: "MovieResultWrapperId");

            migrationBuilder.AddForeignKey(
                name: "FK_Movies_MovieResultWrappers_MovieResultWrapperId",
                table: "Movies",
                column: "MovieResultWrapperId",
                principalTable: "MovieResultWrappers",
                principalColumn: "Id");
        }

        /// <inheritdoc />
        protected override void Down(MigrationBuilder migrationBuilder)
        {
            migrationBuilder.DropForeignKey(
                name: "FK_Movies_MovieResultWrappers_MovieResultWrapperId",
                table: "Movies");

            migrationBuilder.DropTable(
                name: "MovieResultWrappers");

            migrationBuilder.DropIndex(
                name: "IX_Movies_MovieResultWrapperId",
                table: "Movies");

            migrationBuilder.DropColumn(
                name: "MovieResultWrapperId",
                table: "Movies");

            migrationBuilder.AlterColumn<string>(
                name: "Title",
                table: "Movies",
                type: "nvarchar(max)",
                nullable: false,
                oldClrType: typeof(string),
                oldType: "nvarchar(30)",
                oldMaxLength: 30);
        }
    }
}
