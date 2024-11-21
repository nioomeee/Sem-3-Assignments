<?xml version="1.0" encoding="UTF-8"?>

<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="1.1">
	<xsl:template match="/">
		<html>
			<head>
				<title>Students information</title>
			</head>
			<body>
				<table border="1">
					<tr>
						<th>Name</th>
						<th>Address</th>
						<th>Birthdate</th>
						<th>Gender</th>
						<th>Mobile no.</th>
						<th>Result</th>
					</tr>

					<xsl:for-each select="Students/Student">
						<xsl:sort select="Name" order="ascending"/>
							<tr>
								<td><xsl:value-of select="Name"/></td>
								<td><xsl:value-of select="Personal_Info/Address"/></td>
								<td><xsl:value-of select="Personal_Info/Birthdate"/></td>
								<td><xsl:value-of select="Personal_Info/Gender"/></td>
								<td><xsl:value-of select="Personal_Info/Mobile_No"/></td>
								<td><xsl:value-of select="Result"/></td>
							</tr>
					</xsl:for-each>
				</table>
			</body>
		</html>
	</xsl:template>
</xsl:stylesheet>